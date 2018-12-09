#include <iostream>
#include <string>
#include <vector>
#include <set>

const std::set<char> add_sym = {'(', ')', '-', '+'};

void stNum(std::string &num) {
	for(int i = 0; i < num.length(); i++) {
		if(add_sym.count(num[i]))
			num.erase(num.begin() + i);
	}
	if(num.length() == 11)
		num.erase(num.begin());
	else
		num.insert(0, "495");
}

int main(void) {
	std::string ref;
	std::vector<std::string> arr(3);
	std::cin >> ref >> arr[0] >> arr[1] >> arr[2];
	stNum(ref);
	int i = 0;
	for(int i = 0; i < 3; i++) {
		stNum(arr[i]);
		if(arr[i] == ref)
			std::cout << "YES\n";
		else
			std::cout << "NO\n";
	}
	return 0;
}
