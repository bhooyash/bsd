#include <iostream>
using namespace std;

class Demo {
private:
    int nonStaticVar;        
    static int staticVar;

public:
    
    void setValues(int a) {
        nonStaticVar = a;
        staticVar++;
    }

    
    void display() {
        cout << "Non-static value: " << nonStaticVar << endl;
        cout << "Static value: " << staticVar << endl;
    }
};

int Demo::staticVar = 0;

int main() {
    Demo obj1, obj2, obj3;

    obj1.setValues(10);
    obj2.setValues(20);
    obj3.setValues(30);

    cout << "\nObject 1:\n";
    obj1.display();

    cout << "\nObject 2:\n";
    obj2.display();

    cout << "\nObject 3:\n";
    obj3.display();

    return 0;
}
