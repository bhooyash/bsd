#include<iostream>
using namespace std;
class Base {
public:
    virtual void show() {  //in this if we use virtual function it will show the output of derived class first
        cout << "chutiya";
    }
};

class Derived : public Base {
public:
    void show() {
        cout << "bakchod";
    }
};

int main() {
    Base* ptr;
    Derived d;
    ptr = &d;

    ptr->show();  // calls Derived
}
