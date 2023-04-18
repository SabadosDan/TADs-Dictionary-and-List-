//
// Created by danut on 5/24/2022.
//

#include "ServiceUser.h"

///constructor vid
ServiceUser::ServiceUser(){}

///constructor cu parametru
ServiceUser::ServiceUser(RepositoryUser repo) {
    this->repository = repo;
}

///adauga un user
void ServiceUser::add(int idu, string n, int a, string g, string c, string ph) {
    User u(idu, n, a , g, c, ph);
    this->repository.add(u);
}

///sterge user dupa id
bool ServiceUser::del(int idu) {
    return this->repository.del(idu);
}

///cauta user dupa id
bool ServiceUser::find(int idu) {
    return this->repository.find(idu);
}

///modifica user dupa id
bool ServiceUser::update(int idu, int new_id, string new_name,
                         int new_age, string new_gender, string new_country, string new_ph_number) {
    User new_user(new_id, new_name, new_age, new_gender, new_country, new_ph_number);
    return this->repository.update(idu, new_user);
}

///retureaza user dupa cheie
User ServiceUser::get_elem(int pos) {
    return this->repository.get_elem(pos);
}

///returneaza numarul de useri
int ServiceUser::get_size() {
    return this->repository.get_size();
}

///returneaza toti userii
Dictionary<int, User> ServiceUser::get_all() {
    return this->repository.get_all();
}

///destructor
ServiceUser::~ServiceUser() {}
