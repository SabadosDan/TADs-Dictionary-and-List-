//
// Created by danut on 5/10/2022.
//

#ifndef PROIECT_SDA_DICTIONARY_H
#define PROIECT_SDA_DICTIONARY_H

#include "Node.h"

///TAD Dictionar pe reprezentare inlantuita
template <class K, class V>
class Dictionary {
private:
    Node<K, V> *first;
    int size;
public:

    ///constructor
    Dictionary() {
        this->first = nullptr;
        size = 0;
    }

    ///adaugare element in dictionar
    void put(K key, V value) {
        if (first == nullptr) {
            first = new Node<K, V>(key, value);
            this->size++;
        } else {
            Node<K, V> *p = first;
            while (p->next != nullptr && p->key != key) {
                p = p->next;
            }
            if (p->key == key) p->value = value;
            else p->next = new Node<K, V>(key, value), this->size++;;
        }
    }

    ///returneaza valoarea unui element dupa cheie
    V search(K key) {
        Node<K, V> *p = first;
        while (p != nullptr) {
            if (p->key == key)
                return p->value;
            p = p->next;
        }
        return {};
    }

    ///returneaza numarul de elemente din dictionar
    int get_size() {
        return this->size;
    }

    ///returneaza valoarea unui element dupa pozitia din dictionar
    V get_value_at_position(int pos){
        if (pos == 0) return first->value;
        else if (pos < size){
            int i = 1;
            Node<K, V> *p = first->next;
            while (i < pos){
                i++;
                p = p->next;
            }
            return p->value;
        }
        return {};
    }

    ///sterge un element din dictionar, dupa cheie
    bool remove(K key) {
        Node<K, V> *node_to_delete = nullptr;

        if (first != nullptr) {
            if (first->key == key) {
                node_to_delete = first;
                first = first->next;
                size = size - 1;
            } else {
                Node<K, V> *p = first->next;
                Node<K, V> *q = first;
                while (p != nullptr)
                    if (p->key == key) {
                        node_to_delete = p;
                        p = nullptr;
                    } else {
                        p = p->next;
                        q = q->next;
                    }
                if (node_to_delete != nullptr) {
                    q->next = node_to_delete->next;
                    size = size - 1;
                }
            }
        }
        if (node_to_delete != nullptr) {
            delete node_to_delete;
            return true;
        }
        return false;
    }

    ///modifica valoarea unui element cu alta noua, dupa cheie
    bool update(K key, V new_value) {
        Node<K, V> *node_to_update = nullptr;

        if (first != nullptr) {
            if (first->key == key) {
                first->value = new_value;
                return true;
            } else {
                Node<K, V> *p = first->next;
                Node<K, V> *q = first;
                while (p != nullptr)
                    if (p->key == key) {
                        node_to_update = p;
                        p = nullptr;
                    } else {
                        p = p->next;
                        q = q->next;
                    }
                if (node_to_update != nullptr) {
                    q->next->value = new_value;
                    return true;
                }
            }

        }
        return false;
    }

    ///destructor
    ~Dictionary(){
        this->first = nullptr;
        this->size = 0;
    }
};


#endif //PROIECT_SDA_DICTIONARY_H;
