#include<iostream>
int main() {
	int temp;
	std::cout<<"enter the temperature";
	std::cin>> temp;
	if(temp>0&&temp<37){
		std::cout<<"temperature is normal";
	} else if (temp>37&&temp<56){
		std::cout<<"temperature is high";
	} else{
		std::cout<<"enter a valid temperature";
	} return 0;
}
 
