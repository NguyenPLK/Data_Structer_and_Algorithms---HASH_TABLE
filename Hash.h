#ifndef _HASH_
#define _HASH_

#include <iostream>
#include <string>
#include "Student_info.h"

class Hash
{
private:
    struct Node
    {
        Student m_student;
        Node *next;
    };

    /// @brief
    const static int tableSize = 10;

    Node *HashTable[tableSize];
    Node *first;

public:
    Hash();
    int Hashing(std::string &);
    void AddingProperties(const Student &);
    int Number_Of_Elements_In_Index(const int &);
    void PrintTable();
};

#endif