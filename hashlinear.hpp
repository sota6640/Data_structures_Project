#ifndef HASHLINEAR_HPP
#define HASHLINEAR_HPP

#include <string>

using namespace std;

struct Node 
{
    int key;
    struct Node* next;
    
};

class HashTable 
{
   //Node* *table;  //Student **arr;
   int *table;// for open addressing, it is fine for this
    int tableSize; // No. of buckets (linked lists) 
    int numOfcolision_insert =0;
    int numOfcolision_search = 0;

 public:

    HashTable(int bsize);  // Constructor
    bool insertItem(int key); // bool or void not sure, void should work better? similar to the linked list
    unsigned int hashFunction(int key);///////////////////////
    void printTable();
    int searchItem(int key);
    int getNumOfCollision_insert();
    int getNumOfCollision_search();
    void setCol_insert();
    void setCol_search();
    
};

#endif