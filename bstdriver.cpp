#include <iostream>
#include <fstream>
#include <ctime>
#include <sstream>
#include <chrono>
#include <string>
#include "bst.hpp"
using namespace std;



int main(int argc, char* argv[])  
{

int testData[10000];

float insert[100];
 
float search[100];

string input_str[10000];
string input;

ifstream in_file1(argv[1]);
ofstream out_file(argv[2]);
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

    

    BST* Library = new BST(); //class

    int iteration = 0;
    int iter[100];
    int delta = 100;
    int inc = 0;
    int a = 0;
    int nic = 0;
    int n = 0;
    int j = 0;

    for(iteration = 0; iteration < delta; iteration++) {

    for (n = 0+nic; n < 1 +nic; n++) {
        iter[n] = n;
        cout << iter[n] << " ";
    }
    nic = nic + 1;


    auto start = chrono::steady_clock::now();
    for (a = 0+inc; a < 100+inc; a++) 
    {
        int test = testData[a];
        Library->addItem(test);
    }
    auto end = chrono::steady_clock::now();

    //cout << "Elapsed time in nanoseconds : " 
	//<< chrono::duration_cast<chrono::nanoseconds>(end - start).count()
	//<< " ns" << endl;

    insert[iteration] = chrono::duration_cast<chrono::nanoseconds>(end - start).count()/100;

    cout << "Average Insert Time: " << insert[iteration] << " ns" <<endl;

    int k = 100 + inc;
    int search_key[100];
    int index;
    int ret_val = 0;
    srand((unsigned)time(0));
    for (int v=0; v < 100; v++) {
        index = rand() % k;
        search_key[v] = testData[index];
    }
    auto start1 = chrono::steady_clock::now();

    for(j=0; j<100;j++) {
        //int RandIndex = rand() % k;
        Library->searchItem(search_key[j]);
    }
    auto end1 = chrono::steady_clock::now();
    
    search[iteration] = chrono::duration_cast<chrono::nanoseconds>(end1 - start1).count()/100;

    cout << "Average Search Time: " << search[iteration] << " ns" << endl;
    cout << endl;

    inc = inc + 100;
    
    
    
    }

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



return 0;

}