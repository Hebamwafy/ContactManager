//
//  User.cpp
//  ContactManager
//
//  Created by Heba Elmowafy on 25/10/2023.
//
#include "User.h"
#include <stdio.h>
User::User()
{
     phones_size=5;
     emails_size=5;
    addresses_size=5;
    
     phones_count=0;
    emails_count=0;
    addresses_count=0;
    
    phones=new Phone[phones_size];
    emails=new Email[emails_size];
    addresses=new Address[addresses_size];
    
    age=0;
    gender=0;
    addedDate=time_t(0);
}
User::~User()
{
    delete[]phones;
    delete[]emails;
    delete[]addresses;
}
void User::setId(int u_id)
{
    id=u_id;
};
int User::getId() const
{
    return id;
};
void User::setfName(string fname)
{
    firstname=fname;
};
string User::getfName() const
{
    return firstname;
};
void User::setlName(string lname)
{
    lastname=lname;
};
string User::getlName() const
{
    return lastname;
};
void User::setgender(int x)
{
    gender=x;
};
int User::getgender() const
{
    return gender;
};
void User::setAge(int u_age)
{
    age=u_age;
};
int User::getAge() const
{
    return age;
};
void User::setCity(string c)
{
    city=c;
};
string User::getCity() const
{
    return city;
};

bool User::find(string key)
{
    if(firstname.compare(key)==0||lastname.compare(key)==0)
    {
        return true;
    }
    if(phones_count>0)
    {
        for(int i=0 ; i<phones_count ; ++i)
        {
            if (phones[i].isMatched(key))
                return true;
        }
    }
    
    if(emails_count>0)
    {
        for(int i=0 ; i<emails_count ; ++i)
        {
            if (emails[i].isMatched(key))
                return true;
        }
    }
    
    if(addresses_count>0)
    {
        for(int i=0 ; i<addresses_count ; ++i)
        {
            if (addresses[i].isMatched(key))
                return true;
        }
    }
    return false;
};
void User::readInput()
{
    cout<<"Enter User Information:"<<endl;
    cout<<"First Name:";
    cin>>firstname;
    cout<<"Last Name:";
    cin>>lastname;
    cout<<"Gender (0-MAle , 1-Female):";
    cin>>gender;
    cout<<"Age:";
    cin>>age;
    int n=0;
    cout<<"How many Phones (0-"<<phones_size<<")?";
    cin>>n;
    cin.ignore();
    for (int i=0 ; i<n ; ++i)
    {
        cout<<"------------------------"<<endl;
        string data,type,description;
        cout<<"Phone("<<i+1<<"):";
        cin>>data;
        cout<<"Type("<<i+1<<"):";
        cin>>type;
        cout<<"Description("<<i+1<<"):";
        cin>>description;
        
        Phone *new_phone= new Phone(data , type , description);
        phones[phones_count++]= *new_phone;
    }
    n=0;
    cout<<"How many Emails (0-"<<emails_size<<")?";
    cin>>n;
    cin.ignore();
    for (int i=0 ; i<n ; ++i)
    {
        cout<<"------------------------"<<endl;
        string data,type,description;
        cout<<"Email("<<i+1<<"):";
        cin>>data;
        cout<<"Type("<<i+1<<"):";
        cin>>type;
        cout<<"Description("<<i+1<<"):";
        cin>>description;
        
        Email *new_email= new Email(data , type , description);
        emails[emails_count++]= *new_email;
    }
    
    n=0;
    cout<<"How many Adderesses (0-"<<addresses_size<<")?";
    cin>>n;
    cin.ignore();
    for (int i=0 ; i<n ; ++i)
    {
        cout<<"------------------------"<<endl;
        string data,type,description;
        cout<<"Addresse("<<i+1<<"):";
        cin>>data;
        cout<<"Type("<<i+1<<"):";
        cin>>type;
        cout<<"Description("<<i+1<<"):";
        cin>>description;
        
        Address *new_address= new Address(data , type , description);
        addresses[addresses_count++]= *new_address;
    }
    
};
void User::print()
{
    cout<<"User Information:"<<endl;
    cout<<"Name:"<<firstname<<" "<<lastname<<"\t |"<<"Age:";
    if(age>0)
        cout<<age<<"\t |";
    cout<<"Gender:"<<(gender==0?"Male":"Female");
    cout<<endl;
    cout<<"Phones List:"<<endl;
    if(phones_count>0)
    {
        for (int i=0 ; i<phones_count ; ++i)
        {
            cout<<"\t"<<i+1<<"-";
            phones[i].print();
            cout<<endl;
        }
    }
    cout<<"Emails List:"<<endl;
    if(emails_count>0)
    {
        for (int i=0 ; i<emails_count ; ++i)
        {
            cout<<"\t"<<i+1<<"-";
            emails[i].print();
            cout<<endl;
        }
    }
    cout<<"Addresses List:"<<endl;
    if(addresses_count>0)
    {
        for (int i=0 ; i<addresses_count ; ++i)
        {
            cout<<"\t"<<i+1<<"-";
            addresses[i].print();
            cout<<endl;
        }
    }
};

