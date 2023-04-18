//
// Created by danut on 5/23/2022.
//

#ifndef PROIECT_SDA_REPOSITORYMESSAGE_H
#define PROIECT_SDA_REPOSITORYMESSAGE_H

#include "TAD-uri/List.h"
#include "Entities/Message.h"

class RepositoryMessage {
private:
    List<Message> messages;
public:
    RepositoryMessage();
    RepositoryMessage(const List<Message>& msgs);

    void add(Message &msg);
    bool del(int idu);
    bool find(int idu);

    List<Message> get_all();
    Message get_elem(int position);
    int get_size();
    Message get_by_id(int idu);

    ~RepositoryMessage();
};


#endif //PROIECT_SDA_REPOSITORYMESSAGE_H
