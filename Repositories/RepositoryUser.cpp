//
// Created by danut on 5/20/2022.
//

#include "RepositoryUser.h"

RepositoryUser::RepositoryUser(){}

RepositoryUser::RepositoryUser(Dictionary<int, User>& us) {
    this->users = us;
}

void RepositoryUser::add(User &u) {
    this->users.put(u.get_id(), u);
}

bool RepositoryUser::del(int idu) {
    return this->users.remove(idu);
}

bool RepositoryUser::find(int idu) {
    User value = this->users.search(idu);
     if (value.get_id() != -1) return true;
     return false;
}

bool RepositoryUser::update(int idu, User &new_user) {
    return this->users.update(idu, new_user);
}

Dictionary<int, User> RepositoryUser::get_all() {
    return this->users;
}

int RepositoryUser::get_size() {
    return this->users.get_size();
}

User RepositoryUser::get_by_id(int idu) {
    return this->users.search(idu);
}

User RepositoryUser::get_elem(int key) {
    return this->users.search(key);
}

