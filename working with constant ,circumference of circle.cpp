#include <iostream>
int main() {
	int radius = 2;
	const double PI = 3.14159; // here the pi becomes constant that means read only we cannot change it and write (PI)in capital for this function
	
	double circumference;
	circumference = 2*PI*radius;
	std::cout << circumference<<"cm";
}
