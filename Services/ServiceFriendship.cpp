//
// Created by danut on 5/23/2022.
//

#include "ServiceFriendship.h"

///constructor vid
ServiceFriendship::ServiceFriendship(){};

///constructor cu parametru
ServiceFriendship::ServiceFriendship(RepositoryFriendship& repo) {
    this->repository = repo;
}

///adauga o prietenie
void ServiceFriendship::add(int idu, User u1, User u2) {
    Friendship f(idu, u1, u2);
    this->repository.add(f);
}

///sterge o prietenie dupa id
bool ServiceFriendship::del(int idu) {
    return this->repository.del(idu);
}

///cauta o prietenie dupa id
bool ServiceFriendship::find(int idu) {
    return this->repository.find(idu);
}

/// returneaza toate prieteniile
List<Friendship> ServiceFriendship::get_all() {
    return this->repository.get_all();
}

///returneaza numarul prieteniilor
int ServiceFriendship::get_size() {
    return this->repository.get_size();
}

///returneaza toti prietenii unui user
List<User> ServiceFriendship::all_friends_for_an_user(User u) {
    List<User> rezultat;
    for (int i = 0; i < repository.get_size(); i++){
        if (repository.get_elem(i).get_u1() == u)
            rezultat.push_back(repository.get_elem(i).get_u2());
        else if (repository.get_elem(i).get_u2() == u)
            rezultat.push_back(repository.get_elem(i).get_u1());
    }
    return rezultat;
}

///destructor
ServiceFriendship::~ServiceFriendship(){};
