#pragma once
#include <iostream>
#include <string>
using namespace std;

/**
 * @class Person
 * @brief Base class representing a person in the bank system.
 *
 * Contains common attributes like ID, Name, Password, Email, and Phone.
 * Designed to be inherited by Client, Employee, and Admin.
 */
class Person {
protected:
    int id;                 
    string firstName;       
    string lastName;       
    string password;        
    string email;           
    string phone;           

public:
    //============ Constructor ============
    Person(int id, const string& firstName, const string& lastName,
        const string& password, const string& email, const string& phone)
        : id(id), firstName(firstName), lastName(lastName),
        password(password), email(email), phone(phone) {
    }

    //============ Virtual destructor ============
    virtual ~Person() {}

    // ============ Setters ============
    virtual void setId(int newId) { id = newId; }
    virtual void setFirstName(const string& fn) { firstName = fn; }
    virtual void setLastName(const string& ln) { lastName = ln; }
    virtual void setPassword(const string& pwd) { password = pwd; }
    virtual void setEmail(const string& em) { email = em; }
    virtual void setPhone(const string& ph) { phone = ph; }

    // ============ Getters ============
    int getId() const { return id; }
    string getFirstName() const { return firstName; }
    string getLastName() const { return lastName; }
    string getPassword() const { return password; }
    string getEmail() const { return email; }
    string getPhone() const { return phone; }

    // ============ Full Name ============
    string getFullName() const {
        return firstName + " " + lastName;
    }

    // ============ Virtual Display ============
    virtual void display() const {
        cout << "ID: " << id
            << " | Name: " << getFullName()
            << " | Email: " << email
            << " | Phone: " << phone << endl;
    }
};



int main()
{

}

