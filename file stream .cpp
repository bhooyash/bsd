#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file;
    file.open("bhooyash.txt");

    file << "name:bhooyash sharma\n";
    file << "age:18.";

    file.close();
    cout << "Data written to file successfully.";
    return 0;
}
