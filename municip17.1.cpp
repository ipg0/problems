#include <iostream>
#include <cmath>

int main(void) {
	long long birth, death, interval, ctr;
	std::cin >> birth >> death >> interval;
	ctr = std::floor((static_cast<long double>(death) - static_cast<long double>(birth)) / static_cast<long double>(interval));
	if(!(birth % interval))
		ctr++;
	if(!(death % interval))
		ctr++;
	std::cout << ctr;
}
