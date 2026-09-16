#include <iostream>
#include <string>
using namespace std;

class Student
{
    
private:
    string name;
    int rollNumber;
    float marks;

public:

    void setName(string studentName)
    {
        name = studentName;
    }

    void setRollNumber(int roll)
    {
        rollNumber = roll;
    }

    void setMarks(float studentMarks)
    {
        if (studentMarks >= 0 && studentMarks <= 100)
        {
            marks = studentMarks;
        }
        else
        {
            cout << "Invalid marks!" << endl;
        }
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;

    //What will happen if the programmer creates an object but forgets to call one or more setter functions?

    s1.display();

    return 0;
}