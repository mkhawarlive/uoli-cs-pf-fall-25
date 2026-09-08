# include <iostream>

using namespace std;

int main(){
    int number = 10;
    int &intNumber = number;
    intNumber = 50;

    cout << number;
    
}