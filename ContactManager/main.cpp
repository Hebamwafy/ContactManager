#include<iostream>
#include "Contact.hpp"
using namespace std;
int main()
{
    int c=-1;
    Contact Contact(100);
    while(c!=0)
    {
    cout<<"----------MAIN MENU----------"<<endl;
    cout<<"1.Print All Users?"<<endl;
    cout<<"2.Add New User?"<<endl;
    cout<<"3.Search for Existing User?"<<endl;
    cout<<"4.Edit Existing User?"<<endl;
    cout<<"5.Delete Existing User?"<<endl;
    cout<<"0.Quit?"<<endl;
    cout<<"Enter your Choice.."<<endl;
    cin>>c;
    cout<<"----------------------------"<<endl;
        switch(c)
        {
            case 1:
                //print all users
                Contact.print();
                break;
            case 2:
                //add new user
                Contact.AddUser();
                break;
            case 3:
                //search for wanted user
                {
                string key ;
                cout<<"Enter Keyword to find.."<<endl;
                cin>>key;
                Contact.searchUser(key);
                }
                break;
            case 4:
                //Edit Existing User
                {
                int id;
                cout<<"Enter user id you want to edit.."<<endl;
                cin>>id;
                Contact.EditUser(id);
                }
                break;
            case 5:
                //Delete Existing User
                {
                int id;
                cout<<"Enter user id you want to delete.."<<endl;
                cin>>id;
                Contact.DeleteUser(id);
                }
                break;
        }
    }
}
