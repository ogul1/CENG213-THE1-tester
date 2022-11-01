#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

#include "Node.h"
#include "memory_leak.h"
#include "type_identifier.cpp"

template <class T>
class LinkedList
{
public:
    LinkedList();
    LinkedList(const LinkedList<T> &obj);
    ~LinkedList();

    LinkedList<T> &operator=(const LinkedList<T> &rhs);

    int getSize() const;
    bool isEmpty() const;
    bool containsNode(Node<T> *node) const;
    int getIndex(Node<T> *node) const;

    Node<T> *getFirstNode() const;
    Node<T> *getLastNode() const;
    Node<T> *getNode(const T &data) const;
    Node<T> *getNodeAtIndex(int index) const;

    void append(const T &data);
    void prepend(const T &data);
    void insertAfterNode(const T &data, Node<T> *node);
    void insertAtIndex(const T &data, int index);
    void moveToIndex(int currentIndex, int newIndex);

    void removeNode(Node<T> *node);
    void removeNode(const T &data);
    void removeNodeAtIndex(int index);
    void removeAllNodes();

    void print() const;
    
    static void* operator new(std::size_t size, const char* file, const char* func, int line)
    {
        _Total_Memory_Allocated += size;
        std::cout << "Allocated " << size << " bytes for LinkedList<" << _type_name<T>() << "> in " << file << " line " << line << " function " << func << "\n";
        return ::operator new(size);
    }

    static void operator delete(void* ptr, std::size_t size)
    {
        _Total_Memory_Deallocated += size;
        std::cout << "Deallocated " << size << " bytes for LinkedList<" << _type_name<T>() << "> in " << file << " line " << line << " function " << func << "\n";
        ::operator delete(ptr);
    }

private:
    Node<T> *head;
    int size;
};
#endif

