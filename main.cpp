#include <iostream>
#include <string>
#include <vector>

int main() {
	std::vector<std::string> items;
	std::string item;

	std::cout << "Enter three items:\n";

	for (int index = 0; index < 3; ++index) {
		std::cout << "Item " << index + 1 << ": ";
		std::getline(std::cin, item);
		items.push_back(item);
	}

	std::cout << "\nYou entered:\n";
	for (const std::string& currentItem : items) {
		std::cout << "- " << currentItem << '\n';
	}

	return 0;
}
