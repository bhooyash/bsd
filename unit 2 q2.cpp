#include <iostream>
using namespace std;

class Account {
private:
    int accNo;
    string name;
    double balance;

public:
    
    Account(int a, string n, double b) {
        accNo = a;
        name = n;
        balance = b;
    }


    Account(const Account &obj) {
        accNo = obj.accNo;
        name = obj.name;
        balance = obj.balance;
    }

    
    void display() {
        cout << "Account No: " << accNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    
    Account acc1(101, "Rahul", 5000);

    Account acc2 = acc1;  

    cout << "Original Account:" << endl;
    acc1.display();

    cout << "Joint Account (Copied):" << endl;
    acc2.display();

    return 0;
}
