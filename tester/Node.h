#ifndef NODE_H
#define NODE_H

#include <iostream>
#include "memory_leak.h"
#include "type_identifier.cpp"

template <class T>
class Node
{
public:
    T data;
    Node<T> *prev, *next;

    Node(T dataT) : data(dataT)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    Node(T dataT, Node<T> *prev, Node<T> *next) : data(dataT)
    {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }

    friend std::ostream &operator<<(std::ostream &os, const Node &obj) {
        os << obj.data;
        return os;
    }

    static void* operator new(std::size_t size, const char* file, const char* func, int line)
    {
        _Total_Memory_Allocated += size;
        std::cout << "Allocated " << size << " bytes for Node<" << _type_name<T>() << "> in " << file << " line " << line << " function " << func << "\n";
        return ::operator new(size);
    }

    static void operator delete(void* ptr, std::size_t size)
    {
        _Total_Memory_Deallocated += size;
        std::cout << "Deallocated " << size << " bytes for Node<" << _type_name<T>() << "> in " << file << " line " << line << " function " << func << "\n";
        ::operator delete(ptr);
    }

};

#endif //NODE_H

