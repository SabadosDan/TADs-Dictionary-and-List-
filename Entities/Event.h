//
// Created by danut on 5/18/2022.
//

#ifndef PROIECT_SDA_EVENT_H
#define PROIECT_SDA_EVENT_H
#include "TAD-uri/List.h"
#include <string>
using namespace std;

class Event {
private:
    int id;
    string date;
    List<int> particapants_id;
    string description;
public:
    Event();
    Event(int idu, string d, List<int> pid, string description);
    Event(const Event& e);

    int get_id();
    string get_date();
    List<int> get_particpants_id();
    string get_description();
    void set_id(int idu);
    void set_date(string d);
    void set_participants_id(List<int> pid);
    void set_description(string desc);

    Event& operator=(const Event &e);
    bool operator==(const Event &e);

    ~Event();
};


#endif //PROIECT_SDA_EVENT_H
