//
//  User.h
//  ContactManager
//
//  Created by Heba Elmowafy on 25/10/2023.
//

#ifndef User_h
#define User_h
#include "Address.hpp"
#include "Phone.hpp"
#include "Email.hpp"
#include<iostream>
#include<string>
#include<ctime>
using namespace std;
class User
{
private:
    int id;
    string firstname;
    string lastname;
    int gender;
    int age;
    string city;
    time_t addedDate;
    
    Phone *phones;
    Email *emails;
    Address *addresses;
    
    int phones_size;
    int emails_size;
    int addresses_size;
    
    int phones_count;
    int emails_count;
    int addresses_count;
    
public:
    void setId(int u_id);
    int getId() const;
    void setfName(string fname);
    string getfName() const;
    void setlName(string lname);
    string getlName() const;
    void setgender(int x);
    int getgender() const;
    void setAge(int u_age);
    int getAge() const;
    void setCity(string c);
    string getCity() const;
    void setDate(string datee);
    bool find(string key);
    void readInput();
    void print();
    User();
   virtual ~User();

};


#endif /* User_h */
