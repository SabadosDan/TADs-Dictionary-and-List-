//
// Created by danut on 5/24/2022.
//

#include "ServiceMessage.h"

///constructor vid
ServiceMessage::ServiceMessage(){};

///constructor cu parametru
ServiceMessage::ServiceMessage(RepositoryMessage &repo) {
    this->repository = repo;
}

///adaugare mesaj
void ServiceMessage::add(int idu, int sid, int rid, string txt) {
    Message m(idu, sid, rid, txt);
    this->repository.add(m);
}

///stergere mesaj
bool ServiceMessage::del(int idu) {
    return this->repository.del(idu);
}

///modificare mesaj
bool ServiceMessage::find(int idu) {
    return this->repository.find(idu);
}

///returneaza elementul dupa pozitie
Message ServiceMessage::get_elem(int pos) {
    return this->repository.get_elem(pos);
}

///returneaza numarul de elemente
int ServiceMessage::get_size() {
    return this->repository.get_size();
}

///returneaza toate mesajele
List<Message> ServiceMessage::get_all() {
    return this->repository.get_all();
}

///returneaza toate mesajele dintre 2 useri
List<Message> ServiceMessage::all_msgs_between_2_users(int id_u1, int id_u2) {
    List<Message> rezultat;
    for(int i = 0; i < repository.get_size(); i++){
        if((repository.get_elem(i).get_receiver_id() == id_u1 and repository.get_elem(i).get_sender_id() == id_u2 )
        or (repository.get_elem(i).get_sender_id() == id_u1 and repository.get_elem(i).get_receiver_id() == id_u2))
            rezultat.push_back(repository.get_elem(i));
    }
    return rezultat;
}

///destructor
ServiceMessage::~ServiceMessage(){};
