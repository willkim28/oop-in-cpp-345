// Workshop 1 - Linkage, Storage Duration, Namespaces, and OS Interface
// In-Lab
// Name: Woohyun Kim
// Student #: 122733157
// Course: OOP244 Fall 2018
// File: String.h

#ifndef STRING_H
#define STRING_H

#include <iostream>
#include <cstring>

namespace sict {
    const int MAX = 3;
    class String {
        char cStr[MAX+1];
    public:
        String(const char*);
        void display(std::ostream&) const;
    };

    std::ostream& operator<<(std::ostream&, const String&);
}

#endif