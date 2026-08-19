#include <iostream>
using namespace std;

void calculate(int a, int b, int &s, int &p)
{
    s = a + b;
    p = a * b;
}

int main()
{
    int sum;
    int product;

    calculate(5, 4, sum, product);

    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;

    return 0;
}