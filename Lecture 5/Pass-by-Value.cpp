#include <iostream>
using namespace std;

void changeNumber(int n)
{
    cout << "Before Changing value of n: " << n << endl;
    n = 100;
    cout << "After Changing value of n: " << n << endl;
}

int main()
{
    int number = 10;

    cout << "Before function: " << number << endl;

    changeNumber(number);

    cout << "After function: " << number << endl;

    return 0;
}