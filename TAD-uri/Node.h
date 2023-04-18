//
// Created by danut on 5/10/2022.
//

#ifndef PROIECT_SDA_NODE_H
#define PROIECT_SDA_NODE_H

template <typename K, typename V> class Dictionary;
///clasa Node pentru TAD Dictionar
template <class K, class V>
class Node {
private:
    K key;
    V value;
    Node<K, V>* next;
public:
    ///fiind un element din dictionar are 2 atribute, cheia si valoarea
    Node(K key, V value) : key(key), value(value){
        this->next = nullptr;
    }
    friend class Dictionary<K, V>;
};


#endif //PROIECT_SDA_NODE_H
