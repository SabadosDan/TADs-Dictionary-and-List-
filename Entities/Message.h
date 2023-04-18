//
// Created by danut on 5/18/2022.
//

#ifndef PROIECT_SDA_MESSAGE_H
#define PROIECT_SDA_MESSAGE_H

#include <string>
using namespace std;

class Message {
private:
    int id;
    int sender_id;
    int receiver_id;
    string text;
public:
    Message();
    Message(int idu, int sid, int rid, string txt);
    Message(const Message& m);

    int get_id();
    int get_sender_id();
    int get_receiver_id();
    string get_text();
    void set_id(int id);
    void set_sender_id(int sid);
    void set_receiver_id(int rid);
    void set_text(string txt);

    Message& operator=(const Message &m);
    bool operator==(const Message &m);

    ~Message();
};


#endif //PROIECT_SDA_MESSAGE_H
