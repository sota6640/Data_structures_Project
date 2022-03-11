# ECEN 2270 Data_Structures_Project

I created a C++ program tha evaluates the most efficient data structure to track library book deliveries using integer- based shipment IDs.


argv[0] = ./a.out
argv[1] = name of the dataset (.csv file)
argv[2] = insert and search performance (.csv file)
argv[3] = collisions (only for hash tables)  (.csv file)

Examples:

Linked List; 

g++ sll.cpp slldriver.cpp
./a.out      dataSetA.csv          insert_search_performance_linked_list_dataSetA.csv 


BST;

g++ bst.cpp bstdriver.cpp
./a.out     dataSetA.csv           insert_search_performance_BST_dataSetA.csv

HashTable Linear

g++ hashlinear.cpp hashlineardriver.cpp
./a.out     dataSetA.csv        insert_search_performance_hashlinear_dataSetA.csv      insert_search_collisions_dataSetA

g++ hashquad.cpp hashquaddriver.cpp
./a.out     dataSetA.csv        insert_search_performance_hashquad_dataSetA.csv        insert_search_collisions_dataSetA

g++ hashchain.cpp hashchaindriver.cpp
./a.out     dataSetA.csv          insert_search_performance_hashchain_dataSetA.csv      insert_seach_hashchain_collisions_datasSetA 
