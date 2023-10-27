//
//  Phone.cpp
//  ContactManager
//
//  Created by Heba Elmowafy on 25/10/2023.
//

#include "Phone.hpp"
void Phone::setPhone(string pphone)
{
    phone= pphone;
};
string Phone::getPhone() const
{
    return phone;
};
void Phone::setType( string pType)
{
    p_type=pType;
};
string Phone::getType() const
{
    return p_type;
};
void Phone::setDescription(string pDesc)
{
    p_description=pDesc;
};
string Phone::getDescription() const
{
    return p_description;
};
bool Phone:: isMatched(string key)
{
    return (phone.compare(key)==0);
};
void Phone::print()
{
    cout<<"phone:"<<phone<<"\t |"<<"type:"<<p_type<<"\t |"<<"Description:"<<p_description<<"\t |"<<endl;
};
Phone::Phone()
{
    
};
Phone::Phone(string pphone, string pType,string pDesc)
{
    setPhone(pphone);
    setType(pType);
    setDescription(pDesc);
};
Phone::~Phone()
{
    
};
