#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;

#include "sll.hpp"


bool LL::isEmpty()
{
    
    return (!LL_front || !LL_end);
}

void LL::insertItem(int key) //Beware of edge cases
{    
    Node* newNode = new Node;
    newNode->key = key;
    newNode->next = NULL;

    if(isEmpty()) {
        LL_front = newNode;
        LL_end = newNode;
    }

    else {
       // newNode->next = LL_front;
        //LL_front = newNode;
        LL_end->next = newNode;
        LL_end = newNode;
    }
    
    
}


Node* LL::searchItem(int key)
{
    Node* node;
   
    node = LL_front;

    while (node != NULL) { 
       
        if (node->key == key){
            return node;
            
        }
        node = node->next;
    }
    return NULL;
}



void LL::printPath() 
{
    Node* node;
    node = LL_front;

    cout << "== CURRENT PATH ==" <<endl;
    while(node != NULL) {
    cout << node->key << " " ;
    node = node->next;
    }
    cout << endl;
}
