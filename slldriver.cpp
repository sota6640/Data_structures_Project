#include <iostream>
#include <fstream>
#include <ctime>
#include <sstream>
#include <chrono>
#include <string>
#include "sll.hpp"
using namespace std;

int main(int argc, char* argv[])  
{
    

int testData[10000];

float insert[100];

float collision_insert[100];
float collision_search[100];
 
float search[100];

string input_str[10000];
string input;

ifstream in_file1(argv[1]);
ofstream out_file(argv[2]);
ofstream out_file2(argv[3]);
int i = 0;



    while (getline(in_file1, input)) 
    {
        stringstream ss(input);

        for (i = 0; i < 10000; i++)
        {
        getline(ss, input_str[i], ',');
        testData[i] = stoi(input_str[i]);
        }
      
    }

LL Library;

int iteration = 0;
int iter[100];
int delta = 100;
int inc = 0;
int a = 0;
int j = 0;
int k = 0;
int n = 0;
int nic = 0;

for(iteration = 0; iteration < delta; iteration++) {

for (n = 0+nic; n < 1+nic; n++) {
        iter[n] = n;
        cout << iter[n] << " ";
}
nic = nic + 1;



auto start = chrono::steady_clock::now();
for (a = 0+inc ; a < 100+inc; a++) 
{
        int test = testData[a];
        Library.insertItem(test);
       // int col = mht.getNumOfCollision_insert;
}
auto end = chrono::steady_clock::now();

//collision_insert[iteration] = Library.getNumOfCollision_insert();
//Librar.setCol_insert(); //setting the collision to 0 for the next iteration

insert[iteration] = chrono::duration_cast<chrono::nanoseconds>(end - start).count()/100;

    cout << "Average Insert Time: " << insert[iteration] << " ns" <<endl;


//mht.printTable();


    int k = 100 + inc;
    

    int search_key[100];
    int index;
    int ret_val = 0;
    srand((unsigned)time(0));
    for (int v=0; v < 100; v++) {
        index = rand() % k;
        search_key[v] = testData[index];
    }
    Node* tempNode;
    auto start1 = chrono::steady_clock::now();
    
    for(j=0; j < 100; j++) 
    {
        //int RandIndex = rand() % k; // 100 , then 200 , 300 , 400 , 500, 600, 700, 800 , 900.. and so on
        //Node *saveNode = Library.searchItem(testData[RandIndex]);  
        //Node *tempNode;
       tempNode = Library.searchItem(search_key[j]); 
       // cout << saveNode->key << " ";
    }
    auto end1 = chrono::steady_clock::now();

    //collision_search[iteration] = mht.getNumOfCollision_search();
    //mht.setCol_search(); //setting the collisions to 0 for the next iteration

     search[iteration] = chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count()/100;

    cout << "Average Search Time: " << search[iteration] << " ns" <<endl;
    cout << endl;


    inc = inc + 100;

}

//for(int output = 0; output < 99; output++) {
   //     out_file2 << iter[output] << ",";
  //  }
  //  out_file2 << iter[99] <<endl;

//for (int y = 0; y < 99; y++) {
   // out_file2 << collision_insert[y] << ",";
  //  }
  //  out_file2 << collision_insert[99] <<endl;

//for (int y = 0; y < 99; y++) {
    //out_file2 << collision_search[y] << ",";
   // }
   // out_file2 << collision_search[99] <<endl;



for(int output = 0; output < 99; output++) {
        out_file << iter[output] << ",";
    }
    out_file << iter[99] <<endl;

    for(int output1 = 0; output1 < 99; output1++) {
        out_file << insert[output1] << ",";
    }
    out_file << insert[99] <<endl;
    

    for(int output2 = 0; output2 < 99; output2++) {
        out_file << search[output2] << ","; 
    }
    out_file << search[99] <<endl;


//mht.printTable();


return 0;
}