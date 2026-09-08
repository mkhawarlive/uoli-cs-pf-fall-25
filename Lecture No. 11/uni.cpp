# include <iostream>

using namespace std;

class Student{
    public:
        string name;
        int age;
    public:
        void display(){
            cout << "Student Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

int main(){

    Student awais;

    awais.name = "Awais";
    awais.age = 25;
    awais.display();

    Student abdullah;
     
    abdullah.name = "Abdullah";
    abdullah.age = 30;

    awais.display();
    abdullah.display();
   
}