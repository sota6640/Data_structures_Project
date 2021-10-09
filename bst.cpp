#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include "bst.hpp"

using namespace std;

BST::BST()
{
    root = NULL;
}


Node* addItemHelper(Node* currNode, int data) //used to recursively call itself
{
    if(currNode == NULL){
        Node* newNode = new Node;
        currNode = newNode;
        currNode->key = data;
        currNode->left = NULL;
        currNode->right = NULL;

        return currNode;
    }
    else if(currNode->key < data){
        currNode->right = addItemHelper(currNode->right,data);
    }
    else if(currNode->key > data){
        currNode->left = addItemHelper(currNode->left,data);
    }
    return currNode;

}


void BST:: addItem(int data)
{
    root = addItemHelper(root, data);
    //cout<<data<<" has been added"<<endl;
}


Node* searchKeyHelper(Node* currNode, int data){
    if(currNode == NULL)
        return NULL;

    if(currNode->key == data)
        return currNode; //root

    if(currNode->key > data)
        return searchKeyHelper(currNode->left, data);

    return searchKeyHelper (currNode->right, data);
}


Node* BST::searchItem(int key){
    Node* tempNode;
    tempNode = searchKeyHelper(root, key);
    return tempNode;
}


void printTreeHelper(Node* currNode) {
    if(currNode) {
        printTreeHelper(currNode->left);
        cout << "Key: " <<currNode->key<<endl;
        printTreeHelper(currNode->right);
    }
}

void BST:: printTree() {
   
    
    if(root) {
        
        printTreeHelper(root);
    }
    else { 
        
        cout << "Tree is empty. Cannot print" << endl;
    }
}

