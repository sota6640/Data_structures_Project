#ifndef HASHQUAD_HPP
#define HASHQUAD_HPP

#include <string>


using namespace std;

struct node
{
    int key;
    struct node* next;
};

class HashTable
{
    int tableSize;  // No. of buckets (linked lists)

    // Pointer to an array containing buckets
   // node* *table;
   int *table;
    int numOfcolision_insert =0;
    int numOfcolision_search = 0;
public:
    HashTable(int bsize);  // Constructor

    // inserts a key into hash table
    bool insertItem(int key);

    // hash function to map values to key
    unsigned int hashFunction(int key);

    void printTable();
    int getNumOfCollision();

    int searchItem(int key);
	int getNumOfCollision_insert();
    int getNumOfCollision_search();
    void setCol_insert();
    void setCol_search();
};

#endif
