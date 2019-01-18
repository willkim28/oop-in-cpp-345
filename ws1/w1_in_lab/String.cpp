// Workshop 1 - Linkage, Storage Duration, Namespaces, and OS Interface
// In-Lab
// Name: Woohyun Kim
// Student #: 122733157
// Course: OOP244 Fall 2018
// File: String.cpp

#include "String.h"

namespace sict {
    extern int INITIAL;

    String::String(const char* argStr) {
        if (argStr == nullptr) {
            cStr[0] = '\0';
        } else {
            std::strncpy(cStr, argStr, MAX);
            cStr[MAX] = '\0';
        }
    }
    
    void String::display(std::ostream& os) const {
        static int no = INITIAL;
        os << no << ": " << cStr;
        ++no;
    }

    std::ostream& operator<<(std::ostream& os, const String& argStr) {
        argStr.display(os);
        return os;
    }
}