#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

std::pair<bool, bool> isPossible(std::vector<int> pos) {
	return std::make_pair<bool, bool>(std::abs(pos[0] - pos[1]) > 1, std::abs(pos[1] - pos[2]) > 1);
}

int main() {
	unsigned int moves = 0;
	std::vector<int> pos(3);
	std::cin >> pos[0] >> pos[1] >> pos[2];
	std::sort(pos.begin(), pos.end());
	while(isPossible(pos).first || isPossible(pos).second) {
		if(isPossible(pos).first && isPossible(pos).second)
			if(std::abs(pos[0] - pos[1]) > std::abs(pos[1] - pos[2]))
				pos[2] = (pos[0] + pos[1]) / 2;
			else
				pos[0] = (pos[1] + pos[2]) / 2;
		else if(isPossible(pos).first)
			pos[2] = (pos[0] + pos[1]) / 2;
		else
			pos[0] = (pos[1] + pos[2]) / 2;
		std::sort(pos.begin(), pos.end());
		moves++;
	}
	std::cout << moves;
	return 0;
}
