#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "hashlinear.hpp"


using namespace std;



unsigned int HashTable:: hashFunction(int key) {
    return key % tableSize;       
}


int HashTable::getNumOfCollision_insert() {
    return numOfcolision_insert;
}

int HashTable::getNumOfCollision_search() {
    return numOfcolision_search;
}


HashTable::HashTable(int bsize) {
    tableSize = bsize;
    table = new int[tableSize];
    int i = 0;
    for(i=0; i < tableSize; i++) {
        table[i] = -1;
    }
    cout << tableSize <<endl;
}

bool HashTable::insertItem(int key) {
    int hashIndex = hashFunction(key); //returns the index
    
if (table[hashIndex]== -1) { 
        table[hashIndex] = key;
        return true;
    }
    else {
        int i = 1;
        for (i = 1; i < tableSize; i++)
        {
            numOfcolision_insert++;
            int linearIndex = (hashIndex + i) % tableSize;
            if(table[linearIndex] == -1) {
                table[linearIndex] = key;
                return true;
            }

        }
    }
    return false;

}

void HashTable::printTable() {
    for (int i=0; i < tableSize; i++) {
        if (table[i] != -1)
        cout << "H_Table at index " << i << " is " << table[i] <<endl;
    }
}

int HashTable::searchItem(int key) {
    int hashIndex = hashFunction(key); //1

    if(table[hashIndex] == key) {
        return key;
    }

    else {
        for (int i=1; i <tableSize; i++) {
            numOfcolision_search++;
            int linear_Index = (hashIndex + i) % tableSize;
            if(table[linear_Index] == key) {
                return key;
            }
        }
    }

    return -1;
    
    

}


void HashTable:: setCol_insert() {
    numOfcolision_insert = 0;
}

void HashTable:: setCol_search() {
    numOfcolision_search = 0;
}