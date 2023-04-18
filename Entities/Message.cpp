//
// Created by danut on 5/18/2022.
//

#include "Message.h"

Message::Message() {
    this->id = -1;
    this->sender_id = -1;
    this->receiver_id = -1;
}

Message::Message(int idu, int sid, int rid, string txt) {
    this->id = idu;
    this->receiver_id = rid;
    this->sender_id = sid;
    this->text = txt;
}

Message::Message(const Message &m) {
    this->id = m.id;
    this->receiver_id = m.receiver_id;
    this->sender_id = m.sender_id;
    this->text = m.text;
}

int Message::get_id() {
    return this->id;
}

int Message::get_sender_id() {
    return this->sender_id;
}

int Message::get_receiver_id() {
    return this->receiver_id;
}

string Message::get_text() {
    return this->text;
}

void Message::set_id(int id) {
    this->id = id;
}

void Message::set_sender_id(int sid) {
    this->sender_id = sid;
}

void Message::set_receiver_id(int rid) {
    this->receiver_id = rid;
}

void Message::set_text(string txt) {
    this->text = txt;
}

Message &Message::operator=(const Message &m) {
    if (this != &m)
    {
        this->id = m.id;
        this->sender_id = m.sender_id;
        this->receiver_id = m.receiver_id;
        this->text = m.text;
    }
    return *this;
}

bool Message::operator==(const Message &m) {
    return this->id == m.id and this->sender_id == m.sender_id
    and this->receiver_id == m.receiver_id and this->text == m.text;
}

Message::~Message() {
    this->id = -1;
    this->receiver_id = -1;
    this->sender_id = -1;
    this->text = "";
}
