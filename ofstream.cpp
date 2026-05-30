#include<iostream>
#include<fstream>

int main() {
	std::ofstream file("bhooyash.txt");
	
 std::string name;
std::cout<<("enter your name");
std::cin>>name;
std::cout<<("this file is best");
file<<"name"<<name;
file.close();
return 0;
}
