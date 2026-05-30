#include <iostream>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    float basicSalary;
    float grossSalary;

public:
    // Function to read employee details
    void readDetails() {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
    }

    // Function to calculate gross salary
    void calculateSalary() {
        float HRA = 0.20 * basicSalary;
        float DA  = 0.10 * basicSalary;
        grossSalary = basicSalary + HRA + DA;
    }

    // Function to display employee details
    void displayDetails() {
        cout << "\nEmployee ID: " << empID;
        cout << "\nEmployee Name: " << name;
        cout << "\nBasic Salary: " << basicSalary;
        cout << "\nGross Salary: " << grossSalary << endl;
    }
};

int main() {
    // Creating two employee objects
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
