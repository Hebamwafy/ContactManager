//
//  Contact.cpp
//  ContactManager
//
//  Created by Heba Elmowafy on 25/10/2023.
//

#include "Contact.hpp"
Contact::Contact(int contact_size)
{
    c_size=contact_size;
    users=new User[c_size];
    count=0;
};
Contact::Contact()
{
    
};
void Contact::AddUser()
{
    User *new_user=new User();
    new_user->setId(count+1);
    new_user->readInput();
    users[count++]= *new_user;
};
void Contact::EditUser(int id)
{
    if (count==0)
    {
        cout<<"No User Exist.."<<endl;
        return;
    }
    bool edited =false;
    
    for (int i=0 ; i<count ; ++i)
    {
        if(users[i].getId()==id)
        {
            users[i].readInput();
        }
        edited=true;
        break;
    }
    
 if(edited){
    cout<<"User Edited Successfully!.."<<endl;
}else
    cout<<"No User Exist.."<<endl;
    
};
void Contact::searchUser(string key) const
{
    int foundCounter=0;
    for(int i=0 ; i<count ; ++i)
    {
        if(users[i].find(key))
        {
            users[i].print();
            foundCounter++;
        }
        
    }
    if (count==0)
    {
        cout<<"No user Found.."<<endl;
    }
    cout<<foundCounter<<"Founded!"<<endl;
};
void Contact::DeleteUser(int id)
{
    if (count==0)
    {
        cout<<"No User Exist.."<<endl;
        return;
    }
    bool deleted =false;
    
    for (int i=0 ; i<count ; ++i)
    {
        if(users[i].getId()==id)
        {
           if(i==count-1)
           {
               count--;
           }else
           {
               users[i]=users[count-1];
               count--;
           }
            deleted =true;
        }
    }
    if(deleted)
    cout<<"User Deleted Successfully!.."<<endl;
};
void Contact::print()
{
    if (count==0)
    {
        cout<<"No user Exist.."<<endl;
        return;
    }
    for (int i=0 ; i<count ; ++i)
    {
        users[i].print();
    }
};
Contact::~Contact()
{
    delete [] users;
};
