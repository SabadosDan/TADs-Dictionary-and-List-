//
// Created by danut on 5/23/2022.
//

#include "RepositoryMessage.h"

RepositoryMessage::RepositoryMessage(){}

RepositoryMessage::RepositoryMessage(const List<Message>& msgs) {
    this->messages = msgs;
}

void RepositoryMessage::add(Message &msg) {
    this->messages.push_back(msg);
}

bool RepositoryMessage::del(int idu) {
    return this->messages.erase(get_by_id(idu));
}

bool RepositoryMessage::find(int idu) {
    return this->messages.if_exists(get_by_id(idu));
}

List<Message> RepositoryMessage::get_all() {
    return this->messages;
}

Message RepositoryMessage::get_elem(int position) {
    return this->messages.get_elem(position);
}

int RepositoryMessage::get_size() {
    return this->messages.size();
}

Message RepositoryMessage::get_by_id(int idu) {
    for (int m = 0; m < messages.size(); m++)
    {
        if (messages.get_elem(m).get_id() == idu)
            return messages.get_elem(m);
    }
    return {};
}

RepositoryMessage::~RepositoryMessage(){}
