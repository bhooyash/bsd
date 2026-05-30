#include <iostream>
int main() {
	double temp;
	char unit;
	
std::cout<<"what unit do you like to convert in";
std::cin>> unit;
if(unit=='F'||unit=='f'){
	std::cout<<"enter temperature in celcius";
	std::cin>> temp;
	temp = (1.8* temp)+32.0;
	std::cout<<"temperature is:" <<temp <<"F\n";
	
}else if (unit=='C'||unit=='c') {
	std::cout<<"enter temperature in fahrenhiet";
	std::cin>> temp;
	temp=(temp-32)/1.8;
	std::cout<<"temperature is:" <<temp <<"C\n";
} else{

std::cout<<"only enter valid digit code";
}return 0; }
