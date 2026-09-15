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
        if (roll > 0)
        {
            rollNumber = roll;
        }
        else
        {
            cout << "Invalid roll number!" << endl;
        }
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

    string getName()
    {
        return name;
    }

    int getRollNumber()
    {
        return rollNumber;
    }

    float getMarks()
    {
        return marks;
    }

    void display()
    {
        cout << "\nSTUDENT INFORMATION" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;

    s1.setName("Ali");
    s1.setRollNumber(101);
    s1.setMarks(85);

    s1.display();

    cout << "\nReading individual values:" << endl;
    cout << "Name: " << s1.getName() << endl;
    cout << "Roll Number: " << s1.getRollNumber() << endl;
    cout << "Marks: " << s1.getMarks() << endl;

    return 0;
}