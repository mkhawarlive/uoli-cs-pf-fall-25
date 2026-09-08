/*
Organize the Program Using Classes
*/
#include <iostream>
using namespace std;


//Class 1: Student
class Student
{
private:
    string name;
    int rollNumber;
    int marks;

public:
    void setData(string studentName, int roll, int studentMarks)
    {
        name = studentName;
        rollNumber = roll;

        if (studentMarks >= 0 && studentMarks <= 100)
        {
            marks = studentMarks;
        }
        else
        {
            marks = 0;
        }
    }

    void updateMarks(int newMarks)
    {
        if (newMarks >= 0 && newMarks <= 100)
        {
            marks = newMarks;
        }
        else
        {
            cout << "Invalid marks." << endl;
        }
    }

    void display()
    {
        cout << "\nSTUDENT INFORMATION" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

//Class 2: BankAccount

class BankAccount
{
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    void setData(string holder, int number, double initialBalance)
    {
        accountHolder = holder;
        accountNumber = number;

        if (initialBalance >= 0)
        {
            balance = initialBalance;
        }
        else
        {
            balance = 0;
        }
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
            cout << "Amount deposited successfully." << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdrawal successful." << endl;
        }
        else
        {
            cout << "Invalid amount or insufficient balance." << endl;
        }
    }

    void display()
    {
        cout << "\nBANK ACCOUNT INFORMATION" << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

//Class 3: LibraryBook
class LibraryBook
{
private:
    string title;
    int bookID;
    bool available;

public:
    void setData(string bookTitle, int id)
    {
        title = bookTitle;
        bookID = id;
        available = true;
    }

    void issueBook()
    {
        if (available == true)
        {
            available = false;
            cout << "Book issued successfully." << endl;
        }
        else
        {
            cout << "Book is already issued." << endl;
        }
    }

    void returnBook()
    {
        if (available == false)
        {
            available = true;
            cout << "Book returned successfully." << endl;
        }
        else
        {
            cout << "Book is already available." << endl;
        }
    }

    void display()
    {
        cout << "\nLIBRARY BOOK INFORMATION" << endl;
        cout << "Book Title: " << title << endl;
        cout << "Book ID: " << bookID << endl;

        if (available == true)
        {
            cout << "Status: Available" << endl;
        }
        else
        {
            cout << "Status: Issued" << endl;
        }
    }
};
int main()
{
    Student student1;
    BankAccount account1;
    LibraryBook book1;

    student1.setData("Ali", 101, 85);
    student1.updateMarks(90);
    student1.display();

    account1.setData("Ahmed", 5001, 10000);
    account1.deposit(5000);
    account1.withdraw(2000);
    account1.display();

    book1.setData("C++ Programming", 301);
    book1.issueBook();
    book1.display();

    return 0;
}