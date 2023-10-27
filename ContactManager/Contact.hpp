//
//  Contact.hpp
//  ContactManager
//
//  Created by Heba Elmowafy on 25/10/2023.
//
#include <stdio.h>
#ifndef Contact_hpp
#define Contact_hpp
#include "User.h"
#include<iostream>
using namespace std;

class Contact
{
public :
    Contact(int);
    Contact();
    void AddUser();
    void EditUser(int id);
    void searchUser(string z) const ;
    void DeleteUser(int id);
    void print();
    virtual ~Contact();
private:
    int count;
    int c_size;
    User *users;
};
#endif /* Contact_hpp */
