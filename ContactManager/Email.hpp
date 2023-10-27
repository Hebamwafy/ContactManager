//
//  Email.hpp
//  ContactManager
//
//  Created by Heba Elmowafy on 25/10/2023.
//

#ifndef Email_hpp
#define Email_hpp
#include<iostream>
#include <stdio.h>
using namespace std;
class Email{
    private :
    string email;
    string e_type;
    string e_description;
    public :
    void setEmail(string eemail);
    string getEmail() const;
    void setType( string eType);
    string getType() const;
    void setDescription(string eDesc);
    string getDescription() const;
    bool isMatched(string key);
    void print();
    Email();
    Email(string eemail, string eType,string eDesc);
    ~Email();
};
#endif /* Email_hpp */
