// Workshop 1 - Linkage, Storage Duration, Namespaces, and OS Interface
// In-Lab
// Name: Woohyun Kim
// Student #: 122733157
// Course: OOP244 Fall 2018
// File: w1.cpp

#include <iostream>
#include <fstream>
#include "process.h"

//int INITIAL = 3; //global scope as described
int main(int argc, char* argv[]) {
    std::cout << "Command Line : ";

    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << " ";
    }
    std::cout << '\n';

    if (argc <= 1) {
        std::cerr << "\n*** Insufficient number of arguments***\n";
        return 1;
    } else {
        for (int i = 1; i < argc; ++i) {
            sict::process(argv[i]);
        }
    }

    return 0;
}