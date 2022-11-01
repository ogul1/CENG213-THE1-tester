#ifndef WINDOW_H
#define WINDOW_H

#include "LinkedList.h"
#include "Tab.h"

class Window
{
public:
    Window();

    Tab getActiveTab();
    bool isEmpty() const;

    void newTab(const Tab &tab);
    void closeTab();
    void moveActiveTabTo(int index);
    void changeActiveTabTo(int index);

    void addTab(Node<Tab> &tab);

    void print();
    
    static void* operator new(std::size_t size, const char* file, const char* func, int line)
    {
        _Total_Memory_Allocated += size;
        std::cout << "Allocated " << size << " bytes for Window in " << file << " line " << line << " function " << func << "\n";
        return ::operator new(size);
    }
    
    static void operator delete(void* ptr, std::size_t size)
    {
        _Total_Memory_Deallocated += size;
        std::cout << "Deallocated " << size << " bytes for Window in " << file << " line " << line << " function " << func << "\n";
        ::operator delete(ptr);
    }

private:
    LinkedList<Tab> tabs;
    int activeTab;
};

#endif
