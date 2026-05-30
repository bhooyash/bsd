#include <iostream>
using namespace std;

class Account {
private:
    int accNo;
    string name;
    double balance;

public:

    Account(int a, string n) {
        accNo = a;
        name = n;
        balance = 0;  
}
    Account(int a, string n, double b) {
        accNo = a;
        name = n;
        balance = b;
    }

    
    void display() {
        cout << "Account No: " << accNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    
    Account acc1(101, "Rahul",34009);


    Account acc2(102, "Priya", 5000);

    
    acc1.display();
    acc2.display();

    return 0;
}
