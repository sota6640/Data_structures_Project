#ifndef QUEUELL_HPP
#define QUEUELL_HPP
#pragma once
#include <iostream>

using namespace std;

struct Node{
    int key;
    Node *next;
};

class LL {
    private:
    Node *LL_front;
    Node *LL_end;

    public:
    void insertItem(int key);
    bool isEmpty();
    void printPath();
    Node* searchItem(int key);
    //bool searchItem(int key);

};

#endif