#ifndef BROWSER_H
#define BROWSER_H

#include "Tab.h"
#include "LinkedList.h"
#include "Window.h"
#include "memory_leak.h"

class Browser
{
public:
    Browser();

    void addWindow(Window& w) {
        windows.append(w);
    }

    void newWindow();
    void closeWindow();
    void switchToWindow(int index);
    Window &getWindow(int index);
    void moveTab(Window &from, Window &to);
    void mergeWindows(Window &window1, Window &window2);
    void mergeAllWindows();
    void closeAllWindows();
    void closeEmptyWindows();
    void print();
    
    static void* operator new(std::size_t size, const char* file, const char* func, int line)
    {
        _Total_Memory_Allocated += size;
        std::cout << "Allocated " << size << " bytes for Browser in " << file << " line " << line << " function " << func << "\n";
        return ::operator new(size);
    }
    
    static void operator delete(void* ptr, std::size_t size)
    {
        _Total_Memory_Deallocated += size;
        std::cout << "Deallocated " << size << " bytes for Browser in " << file << " line " << line << " function " << func << "\n";
        ::operator delete(ptr);
    }

private:
    LinkedList<Window> windows;
};

#endif

