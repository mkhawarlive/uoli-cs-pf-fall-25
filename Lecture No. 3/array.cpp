# include <iostream>

using namespace std;

int main(){

    int num [5];

    for (int i = 0; i < 5; i++){
        cout << "Enter Roll No " << i +1 << " ";
        cin >> num[i];
    }
    
    for (int j=0;j<5;j++){
        cout << "You entered following elements" << endl;
        cout << num[j] << endl;
    }
   
}