//
// Created by danut on 5/24/2022.
//

#ifndef PROIECT_SDA_REPOFILEUSER_H
#define PROIECT_SDA_REPOFILEUSER_H

#include <fstream>
#include "RepositoryUser.h"
using namespace  std;

class RepoFileUser: public RepositoryUser{
private:
    const char* filename;
public:
    RepoFileUser(){}
    RepoFileUser(const char* filename){
        this->filename = filename;

        ifstream f(filename);

        int id, age;
        string name, gender, country, ph_number;
        while(f >> id >> name >> age >> gender >> country >> ph_number){
            User u(id, name, age, gender, country, ph_number);
            add(u);
        }
        f.close();
    }

    void add_file(User& u){
        add(u);
        cout << "da" << endl;
        save_to_file();
    }
    bool del_file(int idu){
        del(idu);
        save_to_file();
        if (del(idu)) return true;
        return false;
    }
    bool find_file(int idu){
        return find(idu);
    }
    bool update_file(int idu, User& new_user){
        update(idu, new_user);
        save_to_file();
        if (update(idu, new_user))
            return true;
        return false;
    }

    int get_size_file(){
        return get_size();
    }
    Dictionary<int, User> get_all_file(){
        return get_all();
    }

    void save_to_file() {
        ofstream f(filename);
        cout << "da" << endl;
        f << "da";
        Dictionary<int, User> dict = this->get_all();
        for (int i = 0; i < dict.get_size(); i++) {
            f << "da";
            f << dict.get_value_at_position(i).get_id() << " ";
            f << dict.get_value_at_position(i).get_name() << " ";
            f << dict.get_value_at_position(i).get_age() << " ";
            f << dict.get_value_at_position(i).get_gender() << " ";
            f << dict.get_value_at_position(i).get_country() << " ";
            f << dict.get_value_at_position(i).get_phone_number() << endl;
        }
        cout <<"da";
        f.close();
    }

    ~RepoFileUser(){}
};


#endif //PROIECT_SDA_REPOFILEUSER_H
