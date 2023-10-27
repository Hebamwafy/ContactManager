//
//  Address.hpp
//  ContactManager
//
//  Created by Heba Elmowafy on 25/10/2023.
//

#ifndef Address_hpp
#define Address_hpp
#include<iostream>
#include <stdio.h>
using namespace std;

class Address{
    private :
    string address;
    string a_type;
    string a_description;
    public :
    void setAddress(string aaddress);
    string getAddress() const;
    void setType( string aType);
    string getType() const;
    void setDescription(string aDesc);
    string getDescription() const;
    bool isMatched(string key);
    void print();
    Address();
    Address(string aaddress, string aType,string aDesc);
    ~Address();
};

#endif /* Address_hpp */
