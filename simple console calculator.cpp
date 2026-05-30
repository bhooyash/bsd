#include<iostream>
#include<math.h>
int main() {
char op;
int num1;
int num2;
double result;
std::cout<<"************calculator***********";
std::cout<<"enter number 1";
std::cin>> num1;
std::cout<<"enter number 2";
std::cin>>num2;
std::cout<< "tell which operation to perform(+-*/%sqrt)"	;
std::cin>> op;
switch(op) {
	case '+':
	result=num1+num2;
	std::cout<<result;
	break;
	case '-':
	result=num1-num2;
	std::cout<<result;
	break;
	case'*':
	result=num1*num2;
	std::cout<<result;
	break;
	case '/':
	result=num1/num2;
	std::cout<<result;
	break;
	case '%':
	result=num1%num2;
	std::cout<<result;
	break;
	case'sqrt':
     result=sqrt(num1);
     std::cout<<result;
     break;
     default:
     std::cout<<"only enter numbers please";
     std::cout<<"*******************";
 }
     return 0;
}
