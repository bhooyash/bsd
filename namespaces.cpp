#include <iostream>
namespace first{ // namespaces are used to give same variable diffrent names and it does not create any conflict
	int x=1;
} 
namespace second {
	int x=9;
} 
int main() { 
	int x=0;
	std::cout << x;
	std::cout << first::x; // this is the output syntax for namespace
} // :: scope resolution symbol
