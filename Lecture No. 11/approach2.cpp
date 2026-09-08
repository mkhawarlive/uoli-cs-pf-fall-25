/*
Procedural Program Using Functions
The Problem: Data and Functions Are Still Separate

The program contains many global variables:
And many separate functions:
There is no physical boundary showing which data belongs to which functions.

Analogy: Three Departments Without Separate Offices

Imagine that the university has:

Student Affairs
Finance Department
Library Department

But all their files are placed on one table.

Employees from every department can access every file.

A library employee could accidentally modify a student’s marks.
A student affairs employee could accidentally modify an account balance.

The work has been divided among employees, but the data has not been properly separated and protected.
*/

#include <iostream>
using namespace std;

// Student variables
string studentName;
int studentRollNumber;
int studentMarks;

// Bank account variables
string accountHolder;
int accountNumber;
double accountBalance;

// Library book variables
string bookTitle;
int bookID;
bool bookAvailable;

// Student functions
void inputStudent()
{
    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter roll number: ";
    cin >> studentRollNumber;

    cout << "Enter marks: ";
    cin >> studentMarks;
}

void updateMarks(int newMarks)
{
    if (newMarks >= 0 && newMarks <= 100)
    {
        studentMarks = newMarks;
    }
    else
    {
        cout << "Invalid marks." << endl;
    }
}

void displayStudent()
{
    cout << "\nSTUDENT INFORMATION" << endl;
    cout << "Name: " << studentName << endl;
    cout << "Roll Number: " << studentRollNumber << endl;
    cout << "Marks: " << studentMarks << endl;
}

// Bank account functions
void inputAccount()
{
    cin.ignore();

    cout << "\nEnter account holder's name: ";
    getline(cin, accountHolder);

    cout << "Enter account number: ";
    cin >> accountNumber;

    cout << "Enter initial balance: ";
    cin >> accountBalance;
}

void deposit(double amount)
{
    if (amount > 0)
    {
        accountBalance = accountBalance + amount;
        cout << "Amount deposited successfully." << endl;
    }
    else
    {
        cout << "Invalid deposit amount." << endl;
    }
}

void withdraw(double amount)
{
    if (amount > 0 && amount <= accountBalance)
    {
        accountBalance = accountBalance - amount;
        cout << "Withdrawal successful." << endl;
    }
    else
    {
        cout << "Invalid amount or insufficient balance." << endl;
    }
}

void displayAccount()
{
    cout << "\nBANK ACCOUNT INFORMATION" << endl;
    cout << "Account Holder: " << accountHolder << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: " << accountBalance << endl;
}

// Library functions
void inputBook()
{
    cin.ignore();

    cout << "\nEnter book title: ";
    getline(cin, bookTitle);

    cout << "Enter book ID: ";
    cin >> bookID;

    bookAvailable = true;
}

void issueBook()
{
    if (bookAvailable == true)
    {
        bookAvailable = false;
        cout << "Book issued successfully." << endl;
    }
    else
    {
        cout << "Book is already issued." << endl;
    }
}

void returnBook()
{
    if (bookAvailable == false)
    {
        bookAvailable = true;
        cout << "Book returned successfully." << endl;
    }
    else
    {
        cout << "Book is already available." << endl;
    }
}

void displayBook()
{
    cout << "\nLIBRARY BOOK INFORMATION" << endl;
    cout << "Book Title: " << bookTitle << endl;
    cout << "Book ID: " << bookID << endl;

    if (bookAvailable == true)
    {
        cout << "Status: Available" << endl;
    }
    else
    {
        cout << "Status: Issued" << endl;
    }
}

int main()
{
    inputStudent();
    updateMarks(90);
    displayStudent();

    inputAccount();
    deposit(5000);
    withdraw(2000);
    displayAccount();

    inputBook();
    issueBook();
    displayBook();

    return 0;
}