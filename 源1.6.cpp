#include <iostream>

int main() {
	int v1 = 1;
	int v2 = 2;
	////1.6题目代码片段：
	//std::cout << "The sum of " << v1;
	//<< " and " << v2;
	//<< " is " << v1 + v2 << std::endl;
	//答：不合法，分号表示语句终结，第2，3语句不合法，应在开头加std::cout

	//订正：
	std::cout << "The sum of " << v1;
	std::cout << " and " << v2;
	std::cout << " is " << v1 + v2 << std::endl;
	return 0;
}