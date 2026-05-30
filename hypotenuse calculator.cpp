#include <iostream>
#include <math.h>
int main() {
double a;
double b;
double c;
std::cout<< "enter side a";
std::cin >> a;
std::cout << "enter side b";
std::cin >> b;
 a=a*a;
 b=b*b;
 c=sqrt(a*a+b*b);
 std::cout<< c;	
 return 0;
}
