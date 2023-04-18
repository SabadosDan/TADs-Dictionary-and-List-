//
// Created by danut on 5/10/2022.
//
#include <iostream>
#include "TAD-uri/List.h"
#include "TAD-uri/Dictionary.h"
#include "User.h"
#include "Repositories/RepositoryFriendship.h"
#include "Repositories/RepositoryUser.h"
#include "Repositories/RepoFileUser.h"
#include "Friendship.h"
#include "Message.h"
#include "Services/ServiceFriendship.h"
#include "Services/ServiceMessage.h"
#include "Services/ServiceUser.h"
#include "UserInterface/UI.h"

using namespace std;

int main(){
    ServiceUser serviceUser;
    ServiceFriendship serviceFriendship;
    ServiceMessage serviceMessage;

    User u1(1,"Dan", 19, "M", "Romania", "0721521610");
    User u2(2,"Calin", 20, "M", "Romania", "0725657512");
    User u3(3,"Georgiana", 20, "F", "Romania", "0721525252");
    User u4(4,"Mariana", 18, "F", "Italia", "0745252521");
    User u5(5,"Flavius", 25, "M", "Germania", "0712851256");
    User u6(6,"Ghita", 22, "M", "Romania", "0741565242");
    User u7(7,"Maria", 19, "F", "Anglia", "0768123145");
    User u8(8,"James", 20, "M", "Anglia", "0759474156");
    User u9(9,"Charlie", 18, "M", "Franta", "0724395125");
    User u10(10,"Mihai", 26, "M", "Romania", "0701823144");
    User u11(11,"Gabriel", 30, "M", "Romania", "0712567891");
    User u12(12,"Iulia", 19, "F", "Romania", "0772901234");
    User u13(13,"Isabela", 21, "F", "Spania", "0791412456");
    User u14(14,"Miruna", 18, "F", "Franta", "0712351567");
    User u15(15,"Pablo", 23, "M", "Italia", "0788295252");

    serviceUser.add(1,"Dan", 19, "M", "Romania", "0721521610");
    serviceUser.add(2,"Calin", 20, "M", "Romania", "0725657512");
    serviceUser.add(3,"Georgiana", 20, "F", "Romania", "0721525252");
    serviceUser.add(4,"Mariana", 18, "F", "Italia", "0745252521");
    serviceUser.add(5,"Flavius", 25, "M", "Germania", "0712851256");
    serviceUser.add(6,"Ghita", 22, "M", "Romania", "0741565242");
    serviceUser.add(7,"Maria", 19, "F", "Anglia", "0768123145");
    serviceUser.add(8,"James", 20, "M", "Anglia", "0759474156");
    serviceUser.add(9,"Charlie", 18, "M", "Franta", "0724395125");
    serviceUser.add(10,"Mihai", 26, "M", "Romania", "0701823144");
    serviceUser.add(11,"Gabriel", 30, "M", "Romania", "0712567891");
    serviceUser.add(12,"Iulia", 19, "F", "Romania", "0772901234");
    serviceUser.add(13,"Isabela", 21, "F", "Spania", "0791412456");
    serviceUser.add(14,"Miruna", 18, "F", "Franta", "0712351567");
    serviceUser.add(15,"Pablo", 23, "M", "Italia", "0788295252");

    serviceFriendship.add(1, u1, u2);
    serviceFriendship.add(2, u1, u3);
    serviceFriendship.add(3, u2, u7);
    serviceFriendship.add(4, u7, u3);
    serviceFriendship.add(5, u4, u15);
    serviceFriendship.add(6, u4, u14);
    serviceFriendship.add(7, u5 , u15);
    serviceFriendship.add(8, u5, u14);
    serviceFriendship.add(9, u6, u10);
    serviceFriendship.add(10, u6, u8);
    serviceFriendship.add(11, u8, u9);
    serviceFriendship.add(12, u9, u10);
    serviceFriendship.add(13, u11, u12);
    serviceFriendship.add(14, u11, u13);
    serviceFriendship.add(15, u12, u13);
    serviceFriendship.add(16, u1, u15);

    serviceMessage.add(1, u1.get_id(), u2.get_id(), "Salut!");
    serviceMessage.add(1, u3.get_id(), u1.get_id(), "Cf?");
    serviceMessage.add(1, u2.get_id(), u7.get_id(), "Buna!");
    serviceMessage.add(1, u7.get_id(), u3.get_id(), "Lma!");
    serviceMessage.add(1, u4.get_id(), u15.get_id(), "Vii?");
    serviceMessage.add(1, u14.get_id(), u4.get_id(), "Haide");
    serviceMessage.add(1, u15.get_id(), u5.get_id(), "Hei!");
    serviceMessage.add(1, u5.get_id(), u14.get_id(), "aloooo");
    serviceMessage.add(1, u6.get_id(), u10.get_id(), "salut!");
    serviceMessage.add(1, u8.get_id(), u6.get_id(), "bunaa");
    serviceMessage.add(1, u8.get_id(), u9.get_id(), "aloda");
    serviceMessage.add(1, u9.get_id(), u10.get_id(), "noroc");
    serviceMessage.add(1, u11.get_id(), u12.get_id(), "salut");
    serviceMessage.add(1, u11.get_id(), u13.get_id(), "Cf?");
    serviceMessage.add(1, u12.get_id(), u13.get_id(), "Salut!");

    UI ui(serviceUser, serviceFriendship, serviceMessage);
    ui.show_menu();


}
