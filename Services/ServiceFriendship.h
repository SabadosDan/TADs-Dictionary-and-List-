//
// Created by danut on 5/23/2022.
//

#ifndef PROIECT_SDA_SERVICEFRIENDSHIP_H
#define PROIECT_SDA_SERVICEFRIENDSHIP_H

#include "Repositories/RepositoryFriendship.h"

class ServiceFriendship {
private:
    RepositoryFriendship repository;
public:
    ServiceFriendship();
    ServiceFriendship(RepositoryFriendship& repo);

    void add(int idu, User u1, User u2);
    bool del(int idu);
    bool find(int idu);

    List<Friendship> get_all();
    int get_size();
    List<User> all_friends_for_an_user(User u);
    Friendship get_elem(int pos){
        return this->repository.get_elem(pos);
    }

    ~ServiceFriendship();
};


#endif //PROIECT_SDA_SERVICEFRIENDSHIP_H
