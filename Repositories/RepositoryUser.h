//
// Created by danut on 5/20/2022.
//

#ifndef PROIECT_SDA_REPOSITORYUSER_H
#define PROIECT_SDA_REPOSITORYUSER_H

#include "TAD-uri/Dictionary.h"
#include "Entities/User.h"
#include <cstdlib>
using namespace std;

class RepositoryUser {
protected:
    Dictionary<int, User> users;
public:
    RepositoryUser();
    RepositoryUser(Dictionary<int, User> &us);

    void add(User& u);
    bool del(int idu);
    bool find(int idu);
    bool update(int idu, User &new_user);

    Dictionary<int, User> get_all();
    int get_size();
    User get_by_id(int idu);
    User get_elem(int key);

    ~RepositoryUser(){};
};


#endif //PROIECT_SDA_REPOSITORYUSER_H
