#ifndef BST_HPP
#define BST_HPP
#include <string>
#include <iostream>

using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;

    

};


class BST{

    private:
    Node *root;
    

    public:

    BST();

    void addItem(int data);

    Node* searchItem(int data);

    void printTree();


};

#endif