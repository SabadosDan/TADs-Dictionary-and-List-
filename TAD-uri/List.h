//
// Created by danut on 5/10/2022.
//

#ifndef PROIECT_SDA_LIST_H
#define PROIECT_SDA_LIST_H

//template <typename T> class List;

///TAD lista cu reprezentare pe array
template <class T>
class List {
private:
    T *elems;
    int capacity;
    int no_elems;
    void resize(){
        T *new_elems = new T [capacity * 2];
        for (int i = 0; i < no_elems; i++)
            new_elems[i] = elems[i];
        capacity*=2;
        delete[] elems;
        elems = new_elems;
    }
public:
    ///constructor vid
    List(){
        this->capacity = 10;
        this->elems = new T [capacity];
        this->no_elems = 0;
    }

    ///constructor de copiere
    List(const List<T>& a){
        this->capacity = a.capacity;
        for (int i = 0; i < a.no_elems; i++)
            this->elems[i] = a.elems[i];
        this->no_elems = a.no_elems;
    }

    ///adaugare element in lista
    void push_back(T elem){
        if (no_elems == capacity) resize();
        elems[no_elems] = elem;
        no_elems++;
    }

    ///verifica daca exista un element
    bool if_exists(T elem){
        int i = 0;
        while(i < no_elems){
            if (elems[i] == elem)
                return true;
            i++;
        }
        return false;
    }

    ///returneaza pozitia unui element
    int get_position(T elem){
        int i = 0;
        while (i < no_elems) {
            if (elems[i] == elem)
                return i;
            i++;
        }
        return -1;
    }

    ///returneaza numarul de elemente
    int size(){
        return this->no_elems;
    }

    ///returneaza elementul dupa pozitie
    T get_elem(int position){
        if(position >= 0  and position < no_elems)
            return elems[position];
        return T();
    }

    ///sterge un element din lista
    bool erase(T elem){
        int position = get_position(elem);
        if (elems[position] == elem){
            for (int i = position; i < no_elems - 1; i++)
                elems[i] = elems[i + 1];
            no_elems--;
            return true;
        }
        return false;
    }

    ///modifica un element din lista cu altul nou
    bool update_elem(T elem, T new_elem){
        int position = get_position(elem);
        if(elems[position] == elem){
            elems[position] = new_elem;
            return true;
        }
        return false;
    }

    ///destructor
    ~List(){
        no_elems = 0;
        capacity = 0;
        delete[] elems;
    }
};


#endif //PROIECT_SDA_LIST_H
