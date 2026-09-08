# include <iostream>

using namespace std;

class Student
{
// private:
    public:
    string name;
    int rollNumber;
    float cgpa;

public:
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main(){
    Student student1;
    student1.name = "Ali";
    student1.rollNumber = 12345;
    student1.cgpa = 3.75;
    student1.display();

    return 0;
}
