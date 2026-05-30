`;

class Student {
private:
    int id;
    string name;

public:
    // Function to read data
    void read() {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
    }

    // Function to display data
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    // Dynamic allocation of array of objects
    Student *ptr = new Student[n];

    // Input using pointer arithmetic
    cout << "\nEnter details:\n";
    for (int i = 0; i < n; i++) {
        (ptr + i)->read();   // pointer arithmetic
    }

    // Display using pointer arithmetic
    cout << "\nStudent Details:\n";
    for (int i = 0; i < n; i++) {
        (ptr + i)->display();   // pointer arithmetic
    }


    delete[] ptr;

    return 0;
}
