//Constructor Executes for Every Object






#include <iostream>
using namespace std;

class Student
{
public:
    Student()
    {
        cout << "Student object created." << endl;
    }
};

int main()
{
    Student s1;
    Student s2;
    Student s3;
    Student s4;
    Student s5;

    return 0;
}