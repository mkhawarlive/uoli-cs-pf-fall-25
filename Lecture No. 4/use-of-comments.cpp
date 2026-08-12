# include <iostream>

using namespace std;


int main(){
    int num;

    cout << "Please Enter Number: ";
    cin >>num;

    if (num >= 5){
        cout << ">=" << endl;
        if (num %2 == 0){
            cout << "Even" << endl;
        }
        else{
            cout << "odd" << endl;
        }

    }

    else if( num > 5){
        cout << ">" << endl;
    }
    else if (num == 5){
        cout << "=" << endl;
    }
    
    else if(num <5 ){
        cout << "<" << endl;
    }
    cout << "End of if";

    
}