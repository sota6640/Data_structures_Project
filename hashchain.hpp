#ifndef HASHCHAIN_HPP
#define HASHCHAIN_HPP

#include <string>
#include <iostream>


using namespace std;

struct node
{
    int key;
    struct node* next;
    //node* next; both should work
};

class HashTable
{
    int tableSize;  // No. of buckets (linked lists)

    // Pointer to an array containing buckets
    node* *table;
    //node* indidcates the linked list
    //int *table; for open addressing, it is fine for this
    int numOfcolision_insert =0;
    int numOfcolision_search = 0;
  //  node* createNode(int key, node* next);
public:
    HashTable(int bsize);  // Constructor

    // inserts a key into hash table
    bool insertItem(int key);

    // hash function to map values to key
    unsigned int hashFunction(int key);

    void printTable();
    int getNumOfCollision();

    node* searchItem(int key);

    int getNumOfCollision_insert();
    int getNumOfCollision_search();
    void setCol_insert();
    void setCol_search();
};

#endif
