# include <iostream>

using namespace std;

class Student{
    public:
    string studentName;
    int rollNumber;
    float marks;

    public:
    void updateMarks(float newMarks){
        if (newMarks >= 0.0 && newMarks <= 100.0){
            marks = newMarks;
            cout << "Marks updated!" << endl;
            displayStudentInfo();
        }
        else{
            cout << "Marks are not updated! Marks are less than 0 or greater than 100";
        }
    }
    void displayStudentInfo(){
        cout << "\nStudent Name: " << studentName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }



};

class StudentFee{
    public:
    string accountHolderName;
    int accountNumber;
    float currentBalance = 10000;

    public:

    void deposit(float amount){
        if (amount > 0 ){
            currentBalance =  currentBalance + amount;
            cout << "Amount "  << amount << " added" << endl;
            cout << "Your current balance is " << currentBalance << endl;
            display();
        }
        else{
            cout << "Either amount is 0 or non-positive" << endl;
        }

    }
    void withDraw(float amount){
        if (amount > 0 && amount <= currentBalance){
            currentBalance =  currentBalance - amount;
            cout << "Amount "  << amount << " deducted" << endl;
            cout << "Your current balance is " << currentBalance << endl;
            display();
        }
        else{
            cout << "Either amount is 0 or greater than current Balance" << endl;
        }
    }
    void display(){
        cout << "\n Account Holder Name: " << accountHolderName;
        cout << "\n Account Number: " << accountNumber;
        cout << "\n Current Balance: " << currentBalance;
    }

};
int main(){
    Student student1;
    student1.studentName = "John Doe";
    student1.rollNumber = 101;

    student1.updateMarks(100.0);
    //student1.marks = 185.5;
    //student1.displayStudentInfo();

    StudentFee sf;
    sf.accountHolderName = "Awais";
    sf.accountNumber = 12345;
    sf. deposit(-5000.0);
    sf.withDraw(2000.0);
    // sf.display();

}