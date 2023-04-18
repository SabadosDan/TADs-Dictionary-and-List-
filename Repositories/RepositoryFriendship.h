//
// Created by danut on 5/23/2022.
//

#ifndef PROIECT_SDA_REPOSITORYFRIENDSHIP_H
#define PROIECT_SDA_REPOSITORYFRIENDSHIP_H

#include "TAD-uri/List.h"
#include "Entities/Friendship.h"

class RepositoryFriendship {
private:
    List<Friendship> friendships;
public:
    RepositoryFriendship();
    RepositoryFriendship(List<Friendship>& frs);

    void add(Friendship &fr);
    bool del(int idu);
    bool find(int idu);
    bool update(int idu, Friendship &new_fr);

    List<Friendship> get_all();
    Friendship get_elem(int position);
    int get_size();
    Friendship get_by_id(int idu);

    ~RepositoryFriendship();
};


#endif //PROIECT_SDA_REPOSITORYFRIENDSHIP_H
