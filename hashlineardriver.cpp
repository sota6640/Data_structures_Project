#include <iostream>
#include <fstream>
#include <ctime>
#include <sstream>
#include <chrono>
#include <string>
#include "hashlinear.hpp"
using namespace std;

int main()  
{
    

HashTable mht(5);
mht.insertItem(7);
mht.insertItem(6);
mht.insertItem(4);
mht.insertItem(12);
mht.insertItem(10);
mht.printTable();





return 0;
}