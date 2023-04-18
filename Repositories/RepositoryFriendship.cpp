//
// Created by danut on 5/23/2022.
//

#include "RepositoryFriendship.h"

RepositoryFriendship::RepositoryFriendship(){}

RepositoryFriendship::RepositoryFriendship(List<Friendship>& frs) {
    this->friendships = frs;
}

void RepositoryFriendship::add(Friendship &fr) {
    this->friendships.push_back(fr);
}

bool RepositoryFriendship::del(int idu) {
    return this->friendships.erase(get_by_id(idu));
}

bool RepositoryFriendship::find(int idu) {
    return this->friendships.if_exists(get_by_id(idu));
}

bool RepositoryFriendship::update(int idu, Friendship &new_fr) {
    return this->friendships.update_elem(get_by_id(idu), new_fr);
}

List<Friendship> RepositoryFriendship::get_all() {
    return this->friendships;
}

Friendship RepositoryFriendship::get_elem(int position) {
    return this->friendships.get_elem(position);
}

int RepositoryFriendship::get_size() {
    return this->friendships.size();
}

Friendship RepositoryFriendship::get_by_id(int idu) {
    for (int f = 0; f < friendships.size(); f++)
    {
        if (friendships.get_elem(f).get_id() == idu)
            return friendships.get_elem(f);
    }
    return {};
}


RepositoryFriendship::~RepositoryFriendship() {}
