//
//  main.cpp
//  CENG213-THE1-tester
//
//  Created by Ogul on 30.10.2022.
//
#include <iostream>
#include "tester/Window.cpp"
#include "tester/Browser.cpp"
#include "tester/LinkedList.cpp"
long long _Total_Memory_Deallocated;
long long _Total_Memory_Allocated;
long long line;
std::string file;
std::string func;

int main() {
    _Total_Memory_Deallocated = 0;
    _Total_Memory_Allocated = 0;
    line = 0;

    /*
     * you can test your implementations here...
     * when you compile this file it will magically tell you
     * where your allocations and deallocations were...
     *
     * good luck senpai...
     */


    std::cout << "\n";
    std::cout << "Total Memory Allocated: " << _Total_Memory_Allocated << " bytes.\n"
              << "Total Memory Deallocated: " << _Total_Memory_Deallocated << " bytes.\n";
	return 0;
};