#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

#include "hashchain.hpp"

//int HashTable:: getNumOfCollision() {
   // return numOfcolision;
//}


unsigned int HashTable:: hashFunction(int key) {
    return key % tableSize; 
}



HashTable::HashTable(int bsize) {
    tableSize = bsize;
    table = new node*[tableSize]; //dynamically create an array of pointers to "node" objects
    int i = 0;
    for (i=0; i < tableSize; i++) 
    {
        table[i] = NULL;
    }
    cout << "Table Size = " << tableSize << endl;
}




node* HashTable:: searchItem(int key) {
    int HashIndex = hashFunction(key);
    node* tempNode;
    tempNode = table[HashIndex]; // getting the head
    while(tempNode != NULL) {
        if(tempNode->key == key) {
            return tempNode;
        }
        tempNode = tempNode->next;
        numOfcolision_search++;
    }
    return NULL;
    
}






bool HashTable:: insertItem(int key) {
    int index;
    int HashIndex = hashFunction(key);
    node *nn = new node();
    nn->key = key;
    nn->next = NULL;

    if(table[HashIndex]!= NULL) {
        numOfcolision_insert++;
    }
    nn->next = table[HashIndex]; // set the head to nn and the next element of that to table[HashIndex]
    table[HashIndex] = nn;
    return true;

}

int HashTable::getNumOfCollision_insert() {
    return numOfcolision_insert;
}

int HashTable::getNumOfCollision_search() {
    return numOfcolision_search;
}

void HashTable:: setCol_insert() {
    numOfcolision_insert = 0;
}

void HashTable:: setCol_search() {
    numOfcolision_search = 0;
}








