//
// Created by danut on 5/17/2022.
//

#include "Friendship.h"

Friendship::Friendship() {
    this->user1 = User();
    this->user2 = User();
}

Friendship::Friendship(int id, User u1, User u2) {
    this->id = id;
    this->user1 = u1;
    this->user2 = u2;
}

Friendship::Friendship(const Friendship &f) {
    this->id = f.id;
    this->user1 = f.user1;
    this->user2 = f.user2;
}

int Friendship::get_id() {
    return this->id;
}

User Friendship::get_u1() {
    return this->user1;
}

User Friendship::get_u2() {
    return this->user2;
}

void Friendship::set_id(int idu) {
    this->id = idu;
}

void Friendship::set_u1(const User& u1) {
    this->user1 = u1;
}

void Friendship::set_u2(const User& u2) {
    this->user2 = u2;
}

Friendship &Friendship::operator=(const Friendship &f) {
    if (this != &f)
    {
        this->id = f.id;
        this->user1 = f.user1;
        this->user2 = f.user2;
    }
    return *this;
}

bool Friendship::operator==(const Friendship &f) {
    return this->id == f.id and this->user1 == f.user1 and this->user2 == f.user2;
}

Friendship::~Friendship() = default;
