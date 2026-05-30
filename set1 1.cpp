#include <iostream>
using namespace std;

class Employee {
private:
    int empID;
    string empName;
    float basicSalary;
    float grossSalary; 

public:
    
    void readDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, empName);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    
    void calculateSalary() {
        float HRA = 0.20 * basicSalary;
        float DA  = 0.10 * basicSalary;
        grossSalary = basicSalary + HRA + DA;
    }


    void displayDetails() {
        cout << "\nEmployee ID: " << empID;
        cout << "\nEmployee Name: " << empName;
        cout << "\nBasic Salary: " << basicSalary;
        cout << "\nGross Salary: " << grossSalary << endl;
    }
};

int main() {
    
    Employee emp1, emp2;

    cout << "Enter details for Employee 1:\n";
    emp1.readDetails();
    emp1.calculateSalary();

    cout << "\nEnter details for Employee 2:\n";
    emp2.readDetails();
    emp2.calculateSalary();

    cout << "\n--- Employee Details ---\n";
    emp1.displayDetails();
    emp2.displayDetails();

    return 0;
}
