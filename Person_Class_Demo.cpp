// TESTS.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include<string.h>
#include <string>
using namespace std;


class clsPerson {
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _PhoneNumber;
public:
    string FullName() {
        return _FirstName + " " + _LastName;
    }
    clsPerson(int ID, string FirstName, string LatName, string Email, string PhoneNumber) {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LatName;
        _Email = Email;
        _PhoneNumber = PhoneNumber;
    }
    void Print() {
        cout << "Enfo:\n\n--------------------------------------\n";
        cout << "ID              : " << _ID << "\n";
        cout << "First Name      : " << _FirstName << "\n";
        cout << "Last Name       : " << _LastName << "\n";
        cout << "Full Name       : " << FullName() << "\n";
        cout << "Email           : " << _Email << "\n";
        cout << "Phone Number    : " << _PhoneNumber << endl;
        cout << "--------------------------------------\n";
    }
    // Getters
    int GetID() { return _ID; }
    string GetFirstName() { return _FirstName; }
    string GetLastName() { return _LastName; }
    string GetEmail() { return _Email; }
    string GetPhoneNumber() { return _PhoneNumber; }

    // Setters
    void SetFirstName(const string& FirstName) { _FirstName = FirstName; }
    void SetLastName(const string& LatName) { _LastName = LatName; }
    void SetEmail(const string& Email) { _Email = Email; }
    void SetPhoneNumber(const string& PhoneNumber) { _PhoneNumber = PhoneNumber; }

    void SendEmail(const string& Subject, const string& Body) {
        cout << "The Following message is sent Successfully to email: " << _Email << "\n";
        cout << "Subject: " << Subject << "\n";
        cout << "Body: " << Body << endl;
    }
    void SendSMS(const string& TextMessage) {
        cout << "\nThe Following SMS is sent Successfully to Phone Number: " << _PhoneNumber << "\n";
        cout << TextMessage << "\n";
    }
};
int main()
{
    clsPerson Per1(100, "Tala", "Altawil", "Tala2003@gmail.com", "0592364170");
    Per1.Print();
    Per1.SendEmail("Hi ", "How Are? ");
    Per1.SendSMS("I am So Proud Of You");
}

