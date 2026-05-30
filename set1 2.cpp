#include <iostream>
using namespace std;

class Book {
private:
    int bookID;
    string title;
    float price;

public:
    
    void readDetails() {
        cout << "Enter Book ID: ";
        cin >> bookID;
        cout << "Enter Book Title: ";
        cin.ignore();
        getline(cin, title);
        cout << "Enter Price: ";
        cin >> price;
    }

    
    void displayDetails() {
        cout << "\nBook ID: " << bookID;
        cout << "\nBook Title: " << title;
        cout << "\nPrice: " << price << endl;
    }
};

int main() {
    
    Book *ptr;

    
    ptr = new Book;

    
    ptr->readDetails();
    ptr->displayDetails();

    
    delete ptr;

    return 0;
}
