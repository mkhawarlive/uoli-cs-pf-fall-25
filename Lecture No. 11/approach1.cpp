/*
Everything Inside main()

The program works, but main() is responsible for everything:

Student management
Account management
Library management
Depositing money
Issuing books
Displaying information

What will happen when we have 500 students, 1,000 accounts, and 10,000 books?

The main() function will become extremely large and difficult to manage.
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Student variables
    string studentName = "Ali";
    int studentRollNumber = 101;
    int studentMarks = 85;

    // Bank account variables
    string accountHolder = "Ahmed";
    int accountNumber = 5001;
    double accountBalance = 10000;

    // Library book variables
    string bookTitle = "C++ Programming";
    int bookID = 301;
    bool bookAvailable = true;

    // Display student information
    cout << "STUDENT INFORMATION" << endl;
    cout << "Name: " << studentName << endl;
    cout << "Roll Number: " << studentRollNumber << endl;
    cout << "Marks: " << studentMarks << endl;

    // Deposit money
    accountBalance = accountBalance + 5000;

    // Display account information
    cout << "\nBANK ACCOUNT INFORMATION" << endl;
    cout << "Account Holder: " << accountHolder << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: " << accountBalance << endl;

    // Issue the book
    if (bookAvailable == true)
    {
        bookAvailable = false;
        cout << "\nBook issued successfully." << endl;
    }
    else
    {
        cout << "\nBook is not available." << endl;
    }

    // Display book information
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

    return 0;
}