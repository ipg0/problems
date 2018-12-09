#include <iostream>
#include <vector>
#include <algorithm>

const int n = 10;

bool isEqual(std::vector<int> bottles, int average) {
	int i = 0, n = bottles.size();
	while(i < n && bottles[i] == average) {
		i++;
	}
	return i == n;
}

int main(void) {
	int average, cur, touches = 0;
	std::vector<int> bottles(n);
	for(int i = 0; i < n; i++) {
		std::cin >> bottles[i];
		average += bottles[i];
	}
	average /= n;
	int i;
	while(!isEqual(bottles, average)) {
		i = 0;
		cur = std::max_element(bottles.begin(), bottles.end()) - bottles.begin();
		while(bottles[cur] > average) {
			if(bottles[i] < average) {
				if(average - bottles[i] <= bottles[cur] - average) {
					bottles[cur] -= average - bottles[i];
					bottles[i] = average;
				}
				else {
					bottles[i] += bottles[cur] - average;
					bottles[cur] = average;
				}
			}
			i++;
		}
		touches++;
	}
	std::cout << touches;
	return 0;
}
