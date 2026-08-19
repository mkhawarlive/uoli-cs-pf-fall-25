#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "You entered: " << name << endl;
    return 0;
}