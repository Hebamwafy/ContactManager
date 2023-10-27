//
//  Email.cpp
//  ContactManager
//
//  Created by Heba Elmowafy on 25/10/2023.
//

#include "Email.hpp"
void Email::setEmail(string eemail)
{
    email=eemail;
};
string Email::getEmail() const
{
    return email;
};
void Email::setType( string eType)
{
    e_type=eType;
};
string Email::getType() const
{
    return e_type;
};
void Email::setDescription(string eDesc)
{
    e_description=eDesc;
};
string Email::getDescription() const
{
    return e_description;
};
bool Email:: isMatched(string key)
{
    return (email.compare(key)==0);
};
void Email::print()
{
    cout<<"Email:"<<email<<"\t |"<<"type:"<<e_type<<"\t |"<<"Description:"<<e_description<<"\t |"<<endl;
};
Email::Email()
{
    
};
Email::Email(string eemail, string eType,string eDesc)
{
    setEmail(eemail);
    setType(eType);
    setDescription(eDesc);
};
Email::~Email()
{
    
};
