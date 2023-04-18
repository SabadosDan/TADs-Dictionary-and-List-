//
// Created by danut on 5/24/2022.
//

#ifndef PROIECT_SDA_UI_H
#define PROIECT_SDA_UI_H

#include "Services/ServiceUser.h"
#include "Services/ServiceFriendship.h"
#include "Services/ServiceMessage.h"

class UI {
private:
    ServiceUser service_user;
    ServiceFriendship service_friendship;
    ServiceMessage service_message;
    void add_user();
    void del_user();
    void find_user();
    void update_user();
    void list_users();
    void list_no_users();

    void add_friendship();
    void del_friendship();
    void find_friendship();
    void list_friendships();
    void list_all_friends_for_user();

    void add_message();
    void del_message();
    void find_message();
    void list_messages();
    void list_msgs_between_2_users();

    static void optiuni();
public:
    UI();
    UI(ServiceUser& serviceUser, ServiceFriendship& serviceFriendship, ServiceMessage& serviceMessage);
    void show_menu();

    ~UI();
};


#endif //PROIECT_SDA_UI_H
