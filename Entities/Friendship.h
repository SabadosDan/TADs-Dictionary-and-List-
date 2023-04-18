//
// Created by danut on 5/17/2022.
//

#ifndef PROIECT_SDA_FRIENDSHIP_H
#define PROIECT_SDA_FRIENDSHIP_H
#include "User.h"

class Friendship {
private:
    int id;
    User user1;
    User user2;
public:
    Friendship();  ///constructor vid
    Friendship(int id, User u1, User u2); ///constructor cu parametrii
    Friendship(const Friendship& f); /// constructor de copiere

    int get_id();                   ///return id
    User get_u1();                  ///return u1
    User get_u2();                  ///return u2
    void set_id(int idu);           ///schimba valoarea id-ului
    void set_u1(const User& u1);    ///schimba valoarea lui u1
    void set_u2(const User& u2);    ///schimba valoarea lui u2

    Friendship& operator=(const Friendship &f); ///supraincarcarea operatorului =
    bool operator==(const Friendship &f);       ///supraincarcarea operatorului ==

    ~Friendship(); ///destructor
};


#endif //PROIECT_SDA_FRIENDSHIP_H
