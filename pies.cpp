#include <iostream>
#include <algorithm>
#include <cmath>

int main()
{
    unsigned long long n, a, b;
    std::cin >> n >> a >> b;
    std::cout << (std::min(std::min(a, b), n) + 1) * (a + b >= n);
    return 0;
}

