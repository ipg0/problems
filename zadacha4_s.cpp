#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
#include <algorithm>

int main(void) {
	long n, min = LONG_MAX;
	std::cin >> n;
	std::vector<long> arr(n);
	std::pair<long, long> dots;
	for(int i = 0; i < n; i++) {
		std::cin >> arr[i];
		for(int j = 0; j < i; j++) {
			if(std::abs(arr[i] - arr[j]) < min) {
				min = std::abs(arr[i] - arr[j]);
				dots.first = j;
				dots.second = i;
			}
		}
	}
	std::cout << min << '\n';
	if(arr[dots.first] < arr[dots.second])
		std::cout << dots.first + 1 << ' ' << dots.second + 1;
	else
		std::cout << dots.second + 1 << ' ' << dots.first + 1;
	return 0;
}
