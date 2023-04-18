//
// Created by danut on 5/10/2022.
//

#ifndef PROIECT_SDA_USER_H
#define PROIECT_SDA_USER_H
#include <string>
#include <iostream>
#include <vector>
using namespace std;
#include "TAD-uri/Dictionary.h"
#include "TAD-uri/List.h"
#include "Event.h"

class User {
private:
    int id;
    string name;
    int age;
    string gender;
    string country;
    string phone_number;
public:
    User();
    User(int idu, string n, int a, string g, string c, string ph);
    User(const User& u);

    int get_id();
    string get_name();
    int get_age();
    string get_gender();
    string get_country();
    string get_phone_number();

    void set_id(int idu);
    void set_name(string n);
    void set_age(int a);
    void set_gender(string g);
    void set_country(string c);
    void set_phone_number(string ph);

    User& operator=(const User &u);
    bool operator==(const User &u);

    ~User();
};


#endif //PROIECT_SDA_USER_H
