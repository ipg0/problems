#include <iostream>
#include <vector>
#include <algorithm>

int main(void) {
	long n, occur;
	std::cin >> n;
	std::vector<long> arr(n);
	for(long i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	long maxelem = 0;
	for(long i = 0; i < n; i++) {
		if(std::count(arr.begin(), arr.end(), arr[i]) > std::count(arr.begin(), arr.end(), maxelem)) {
			maxelem = arr[i];
		}
	}
	occur = std::count(arr.begin(), arr.end(), maxelem);
	for(long i = 0; i < n; i++) {
		if(arr[i] != maxelem)
			std::cout << arr[i] << ' ';
	}
	for(long i = 0; i < occur; i++)
		std::cout << maxelem << ' ';

}
