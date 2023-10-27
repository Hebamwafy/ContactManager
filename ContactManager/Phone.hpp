//
//  Phone.hpp
//  ContactManager
//
//  Created by Heba Elmowafy on 25/10/2023.
//

#ifndef Phone_hpp
#define Phone_hpp
#include <iostream>
using namespace std;
#include <stdio.h>
class Phone{
    private :
    string phone;
    string p_type;
    string p_description;
    public :
    void setPhone(string uphone);
    string getPhone() const;
    void setType( string uType);
    string getType() const;
    void setDescription(string uDesc);
    string getDescription() const;
    bool isMatched(string key);
    void print();
    Phone();
    Phone(string uphone, string uType,string uDesc);
    ~Phone();
};



#endif /* Phone_hpp */
