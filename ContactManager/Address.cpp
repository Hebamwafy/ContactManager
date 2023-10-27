//
//  Address.cpp
//  ContactManager
//
//  Created by Heba Elmowafy on 25/10/2023.
//

#include "Address.hpp"
void Address::setAddress(string aaddress)
{
    address=aaddress;
};
string Address::getAddress() const
{
    return address;
};
void Address::setType( string aType)
{
    a_type=aType;
};
string Address::getType() const
{
    return a_type;
};
void Address::setDescription(string aDesc)
{
    a_description=aDesc;
};
string Address::getDescription() const
{
    return a_description;
};
bool Address:: isMatched(string key)
{
    return (address.compare(key)==0);
};
void Address::print()
{
    cout<<"Address:"<<address<<"\t |"<<"type:"<<a_type<<"\t |"<<"Description:"<<a_description<<"\t |"<<endl;
};
Address::Address()
{
    
};
Address::Address(string aaddress, string aType,string aDesc)
{
    setAddress(aaddress);
    setType(aType);
    setDescription(aDesc);
};
Address::~Address()
{
    
};
