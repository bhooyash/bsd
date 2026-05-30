#include <iostream>
using namespace std;

class ATM {
private:
    int storedPIN = 1234;  

public:
    void authenticate() {
        int enteredPIN, attempts = 0;

        while (attempts < 3) {
            cout << "Enter your PIN: ";
            cin >> enteredPIN;

            if (enteredPIN == storedPIN) {
                cout << "Access Granted!" << endl;
                return;  // exit function
            } else {
                cout << "Incorrect PIN!" << endl;
                attempts++;
            }
        }

        cout << "Access Denied! Too many attempts." << endl;
    }
};

int main() {
    ATM user;
    user.authenticate();

    return 0;
}
