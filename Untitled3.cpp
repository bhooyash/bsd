#include <iostream>
using namespace std;

class MyException {
public:
    const char* what() {
        return "Invalid amount!";
    }
};

int main() {
    int amount;
    cout << "Enter amount: ";
    cin >> amount;

    try {
        if (amount < 1000)
            throw MyException();

        cout << "Transaction successful";
    }
    catch (MyException m) {
        cout << m.what();
    }
}
