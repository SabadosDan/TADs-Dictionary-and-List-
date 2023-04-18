//
// Created by danut on 5/24/2022.
//

#include "UI.h"

void UI::add_user() {
    int id, age;
    string name, gender, country, ph_number;
    cout <<"    Introdu datele pentru un nou user: " << endl;
    cout <<"        ID: "; cin >> id; cout << endl;
    cout <<"        Nume: "; cin >> name; cout << endl;
    cout <<"        Varsta: "; cin >> age; cout << endl;
    cout <<"        Sex(M/F): "; cin >> gender; cout << endl;
    cout <<"        Tara: "; cin >> country; cout << endl;
    cout <<"        Nr. tel.: "; cin >> ph_number; cout << endl;

    this->service_user.add(id, name, age, gender, country, ph_number);
}

void UI::del_user() {
    int id;
    cout <<"    Introdu ID-ul userului pe care doresti sa il stergi: "; cin >> id;
    cout << endl;

    this->service_user.del(id);
}

void UI::find_user() {
    int id;
    cout <<"    Introdu ID-ul userului pe care doresti sa il cauti "; cin >> id;
    cout << endl;

    this->service_user.find(id);
}

void UI::update_user() {
    int id_vechi;
    int id, age;
    string name, gender, country, ph_number;
    cout <<"    Introdu ID-ul userului pe care doresti sa il cauti "; cin >> id_vechi;
    cout << endl;
    cout <<"    Introdu datele pentru modificarea user-ului: " << endl;
    cout <<"        ID: "; cin >> id; cout << endl;
    cout <<"        Nume: "; cin >> name; cout << endl;
    cout <<"        Varsta: "; cin >> age; cout << endl;
    cout <<"        Sex(M/F): "; cin >> gender; cout << endl;
    cout <<"        Tara: "; cin >> country; cout << endl;
    cout <<"        Nr. tel.: "; cin >> ph_number; cout << endl;

    this->service_user.update(id_vechi, id, name,
                              age, gender, country, ph_number);
}

void UI::list_users() {
    Dictionary<int, User> users = this->service_user.get_all();
    cout <<"---------------- Utilizatori ----------------" << endl;
    for(int i = 0; i < users.get_size(); i++){
        cout << users.get_value_at_position(i).get_id() << " ";
        cout << users.get_value_at_position(i).get_name() << " ";
        cout << users.get_value_at_position(i).get_age() << " ";
        cout << users.get_value_at_position(i).get_gender() << " ";
        cout << users.get_value_at_position(i).get_country() << " ";
        cout << users.get_value_at_position(i).get_phone_number() << " ";
        cout << endl;
    }
}

void UI::list_no_users() {
    cout << "   Numarul de utilizatori este " << this->service_user.get_size() << endl;
}

void UI::add_friendship() {
    int id, u1_id, u2_id;
    cout << "   Introdu datele pentru o noua prietenie: " << endl;
    cout << "       ID: "; cin >> id; cout << endl;
    cout << "       ID-ul user nr 1: "; cin >> u1_id; cout << endl;
    cout << "       ID-ul user nr 2: "; cin >> u2_id; cout << endl;
    User u1 = service_user.get_elem(u1_id);
    User u2 = service_user.get_elem(u2_id);

    this->service_friendship.add(id, u1, u2);
}

void UI::del_friendship() {
    int id;
    cout <<"    Introdu ID-ul prieteniei pe care doresti sa o stergi: "; cin >> id;
    cout << endl;

    this->service_friendship.del(id);
}

void UI::find_friendship() {
    int id;
    cout <<"    Introdu ID-ul prieteniei pe care doresti sa o cauti: "; cin >> id;
    cout << endl;

    this->service_friendship.del(id);
}

void UI::list_friendships() {
    List<Friendship> friendships = this->service_friendship.get_all();
    cout <<"---------------- Prietenii ----------------" << endl;
    for (int i = 0; i < friendships.size(); i++){
        cout << friendships.get_elem(i).get_id()<< "  ";
        cout << friendships.get_elem(i).get_u1().get_id() << "-"
        << friendships.get_elem(i).get_u1().get_name() << "  ";
        cout << friendships.get_elem(i).get_u2().get_id() << "-"
             << friendships.get_elem(i).get_u2().get_name() << "  ";
        cout << endl;
    }
}

void UI::list_all_friends_for_user() {
    int id;
    cout <<"    Introdu id-ul user-ului cui vrei sa ii vezi toti prietenii: "; cin >> id; cout <<  endl;
    User u = this->service_user.get_elem(id);
    List<User> rezultat = this->service_friendship.all_friends_for_an_user(u);
    cout <<"---------------- Prietenii lui "<< u.get_name() << "----------------" << endl;
    for (int i = 0; i < rezultat.size(); i++){
        cout << rezultat.get_elem(i).get_id() << " " << rezultat.get_elem(i).get_name() << endl;
    }
}

void UI::add_message() {
    int id, sid, rid;
    string text;
    cout << "   Introdu datele pentru un nou mesaj: " << endl;
    cout << "       ID: "; cin >> id; cout << endl;
    cout << "       ID-ul userului care trimite mesajul: "; cin >> sid; cout << endl;
    cout << "       ID-ul userului care primeste mesajul: "; cin >> rid; cout << endl;
    cout << "       Textul: "; cin >> text; cout << endl;

    this->service_message.add(id, sid, rid, text);
}

void UI::del_message() {
    int id;
    cout << "   Introdu ID-ul mesajului pe care doresti sa il stergi :"; cin >> id; cout << endl;

    this->service_message.del(id);
}

void UI::find_message() {
    int id;
    cout << "   Introdu ID-ul mesajului pe care doresti sa il cauti :"; cin >> id; cout << endl;

    this->service_message.find(id);
}

void UI::list_messages() {
    List<Message> messages = this->service_message.get_all();
    cout <<"---------------- Mesaje ----------------" << endl;
    for (int i = 0; i < messages.size(); i++){
        cout << messages.get_elem(i).get_id()<< "  ";
        cout << messages.get_elem(i).get_sender_id() << " " ;
        cout << messages.get_elem(i).get_receiver_id() << " " ;
        cout << messages.get_elem(i).get_text() << " " ;
        cout << endl;
    }
}

void UI::list_msgs_between_2_users() {

    int u1_id, u2_id;
    cout <<"    Introdu 2 id-uri, ale 2 utilizatori ca sa apara toate mesajele dintre acestia: ";
    cout << endl;
    cout << "       ID 1: "; cin >> u1_id; cout << endl;
    cout << "       ID 2: "; cin >> u2_id; cout << endl;
    List<Message> rezultat = this->service_message.all_msgs_between_2_users(u1_id,u2_id);
    User u1 = this->service_user.get_elem(u1_id);
    User u2 = this->service_user.get_elem(u2_id);
    cout <<"---------------- Mesajele dintre " << u1.get_name() << " si " << u2.get_name() << " ----------------" << endl;
    for (int i = 0; i < rezultat.size(); i++){
        cout << "Trimis de " << rezultat.get_elem(i).get_sender_id() << ": ";
        cout << rezultat.get_elem(i).get_text() << " ";
        cout << endl;
    }
}

UI::UI(){}

UI::UI(ServiceUser &serviceUser, ServiceFriendship& serviceFriendship, ServiceMessage& serviceMessage) {
    this->service_user = serviceUser;
    this->service_friendship = serviceFriendship;
    this->service_message = serviceMessage;
}

void UI::optiuni() {
    cout << "---------- Meniu ----------" << endl;
    cout << "UTILIZATOR:" << endl;
    cout << "  1. Adauga user nou." << endl;
    cout << "  2. Sterge un user dupa id." << endl;
    cout << "  3. Cauta un user dupa id." << endl;
    cout << "  4. Modifica un user dupa id." << endl;
    cout << "  5. Afiseaza toti user-ii." << endl;
    cout << "  6. Afiseaza numarul user-ilor." << endl;
    cout << "PRIETENIE:" << endl;
    cout << "  7. Adauga o prietenie noua intre 2 useri" << endl;
    cout << "  8. Sterge o prietenie dupa id." << endl;
    cout << "  9. Cauta o prietenie dupa id." << endl;
    //cout << " 10. Afiseaza toate prieteniile." << endl;
    cout << " 11. Afiseaza toti prietenii unui user." << endl;
    cout << "MESAJ:" << endl;
    cout << " 12. Trimite un mesaj nou." << endl;
    cout << " 13. Sterge un mesaj dupa id." << endl;
    cout << " 14. Caut un mesaj dupa id." << endl;
    //cout << " 15. Afiseaza toate mesajele." << endl;
    cout << " 16. Afiseaza toate mesajele dintre doi useri." << endl;
    cout << "EXTRA:" << endl;
    cout << " 99. Afiseaza toate optiuniule." << endl;
    cout << "  0. Iesire" << endl;
}

void UI::show_menu() {
    optiuni();
    int opt = 1;

    while (opt != 0){
        cout << "   Introdu optiunea: " << endl;
        cin >> opt;
        switch(opt){
            case 1: {add_user(); break; }
            case 2: {del_user(); break; }
            case 3: {find_user(); break; }
            case 4: {update_user(); break; }
            case 5: {list_users(); break; }
            case 6: {list_no_users(); break; }
            case 7: {add_friendship(); break; }
            case 8: {del_friendship(); break; }
            case 9: {find_friendship(); break; }
            case 10: {list_friendships(); break; }
            case 11: {list_all_friends_for_user(); break; }
            case 12: {add_message(); break; }
            case 13: {del_message(); break; }
            case 14: {find_message(); break; }
            case 15: {list_messages(); break; }
            case 16: {list_msgs_between_2_users(); break; }
            case 99: {optiuni(); break; }
            case 0: {break;}
            default: cout << "	Wrong option! Try again." << endl;
        }
    }
}

UI::~UI() {
}
