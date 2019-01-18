// Workshop 1 - Linkage, Storage Duration, Namespaces, and OS Interface
// In-Lab
// Name: Woohyun Kim
// Student #: 122733157
// Course: OOP244 Fall 2018
// File: process.cpp

#include <iostream>
#include "String.h"

namespace sict {
	void process(const char* str) {
		String a = String(str);
		std::cout << a << std::endl;
	}
}