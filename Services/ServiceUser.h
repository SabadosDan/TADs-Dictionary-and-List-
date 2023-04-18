//
// Created by danut on 5/24/2022.
//

#ifndef PROIECT_SDA_SERVICEUSER_H
#define PROIECT_SDA_SERVICEUSER_H

#include "Repositories/RepoFileUser.h"

class ServiceUser {
private:
     RepositoryUser repository;
public:
    ServiceUser();
    ServiceUser(RepositoryUser repo);

    void add(int idu, string n, int a, string g, string c, string ph);
    bool del(int idu);
    bool find(int idu);
    bool update(int idu, int new_id, string new_name, int new_age, string new_gender,
                string new_country, string new_ph_number);

    User get_elem(int pos);
    int get_size();
    Dictionary<int, User> get_all();

    ~ServiceUser();
};


#endif //PROIECT_SDA_SERVICEUSER_H
