//
// Created by danut on 5/18/2022.
//

#include "Event.h"

Event::Event() {
    this->id = -1;
}

Event::Event(int idu, string d, List<int> pid, string desc) {
    this->id = idu;
    this->date = d;
    this->particapants_id = pid;
    this-> description = desc;
}

Event::Event(const Event &e) {
    this->id = e.id;
    this->date = e.date;
    this->particapants_id = e.particapants_id;
    this-> description = e.description;
}

int Event::get_id() {
    return this->id;
}

string Event::get_date() {
    return this->date;
}

List<int> Event::get_particpants_id() {
    return this->particapants_id;
}

string Event::get_description() {
    return this->description;
}

void Event::set_id(int idu) {
    this->id = idu;
}

void Event::set_date(string d) {
    this->date = d;
}

void Event::set_participants_id(List<int> pid) {
    this->particapants_id = pid;
}

void Event::set_description(string desc) {
    this-> description = desc;
}

Event &Event::operator=(const Event &e) {
    if (this != &e){
        this->id = e.id;
        this->date = e.date;
        this->particapants_id = e.particapants_id;
        this->description = e.description;
    }
    return *this;
}

bool Event::operator==(const Event &e) {
    return this->id == e.id and this->date == e.date  and this->description == e.description;
}

Event::~Event() = default;
