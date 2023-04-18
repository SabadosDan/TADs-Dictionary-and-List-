//
// Created by danut on 5/10/2022.
//

#include "User.h"
#include <vector>
#include <algorithm>
using namespace std;

User::User() {
    this->id = -1;
    this->age = 0;
}

User::User(int idu, string n, int a, string g, string c, string ph) {
    this->id = idu;
    this->name = n;
    this->age = a;
    this->gender = g;
    this->country = c;
    this->phone_number = ph;
}

User::User(const User &u) {
    this->id = u.id;
    this->age = u.age;
    this->name = u.name;
    this->gender = u.gender;
    this->country= u.country;
    this->phone_number = u.phone_number;
}

int User::get_id() {
    return this->id;
}

string User::get_name() {
    return this->name;
}

int User::get_age() {
    return this->age;
}

string User::get_gender() {
    return this->gender;
}

string User::get_country() {
    return this->country;
}

string User::get_phone_number() {
    return this->phone_number;
}

void User::set_id(int idu) {
    this->id = idu;
}

void User::set_name(string n) {
    this->name = n;
}

void User::set_age(int a) {
    this->age = a;
}

void User::set_gender(string g) {
    this->gender = g;
}

void User::set_country(string c) {
    this->country = c;
}

void User::set_phone_number(string ph) {
    this->phone_number = ph;
}


User &User::operator=(const User &u) {
    if (this != &u){
        this->id = u.id;
        this->age = u.age;
        this->name = u.name;
        this->phone_number = u.phone_number;
        this->country = u.country;
        this->gender = u.gender;
    }
    return *this;
}

bool User::operator==(const User &u) {
    return this->id == u.id and this->name == u.name and this->age == u.age and this->gender == u.gender
    and this->country == u.country and this->phone_number == u.phone_number;
}

User::~User(){
    id = -1;
    age = 0;
    gender = "";
    country = "";
    phone_number = "";
}
