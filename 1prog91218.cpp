#include <iostream>

int main(void) {
	long n, m;
	std::cin >> n >> m;
	int arr[n][m];
	for(int x = 0; x < n; x++)
		for(int y = 0; y < m; y++)
			std::cin >> arr[x][y];

	int ctr2 = 0, ctr5 = 0;
	for(int x = 0; x < n; x++)
		for(int y = 0; y < m; y++)
			ctr2 += !(arr[x][y] % 2), ctr5 += !(arr[x][y] % 5);
	std::cout << ctr2 << ' ' << ctr5;
	return 0;
}
