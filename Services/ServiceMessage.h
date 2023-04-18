//
// Created by danut on 5/24/2022.
//

#ifndef PROIECT_SDA_SERVICEMESSAGE_H
#define PROIECT_SDA_SERVICEMESSAGE_H

#include "Repositories/RepositoryMessage.h"

class ServiceMessage {
private:
    RepositoryMessage repository;
public:
    ServiceMessage();
    ServiceMessage(RepositoryMessage& repo);

    void add(int idu, int sid, int rid, string txt);
    bool del(int idu);
    bool find(int idu);

    Message get_elem(int pos);
    int get_size();
    List<Message> get_all();
    List<Message> all_msgs_between_2_users(int id_u1, int id_u2);

    ~ServiceMessage();
};


#endif //PROIECT_SDA_SERVICEMESSAGE_H
