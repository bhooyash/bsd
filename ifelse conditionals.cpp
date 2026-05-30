#include <iostream>
int main() {
	char grade;
	std::cout << "enter your grade";
	std::cin>> grade;
	switch (grade){
	
	case 'a'
	:std::cout<<"excellent";
	break;
	case 'b'
	:std::cout<<"good";
	break;
	case'c'
:std::cout<<"average";
break;
case'd'
:std::cout<<"below average"	;
break;
case'f'
:std::cout<<"failed";
break;
default
:std::cout<<"only give alphabets as input";
}
return 0;
}
