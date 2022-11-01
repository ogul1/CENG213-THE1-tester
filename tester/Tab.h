#ifndef TAB_H
#define TAB_H

#include <iostream>
#include "memory_leak.h"

class Tab
{
public:

    Tab()
    {
        url="";
        title="";
        contents="";
    }

    Tab(const std::string &url, const std::string &title, const std::string &contents)
    {
        this->url = url;
        this->title = title;
        this->contents = contents;
    }

    friend std::ostream &operator<<(std::ostream &os, const Tab &obj)
    {
        os << obj.title << std::endl << obj.url << std::endl << obj.contents << std::endl;
        return os;
    }

    bool operator==(const Tab &rhs)
    {
        return url == rhs.url && title == rhs.title && contents == rhs.contents;
    }

    std::string getUrl() {
        return url;
    }

    std::string getTitle() {
        return title;
    }

    std::string getContents() {
        return contents;
    }
    
    static void* operator new(std::size_t size, const char* file, const char* func, int line)
    {
        _Total_Memory_Allocated += size;
        std::cout << "Allocated " << size << " bytes for Tab in " << file << " line " << line << " function " << func << "\n";
        return ::operator new(size);
    }

    static void operator delete(void* ptr, std::size_t size)
    {
        _Total_Memory_Deallocated += size;
        std::cout << "Deallocated " << size << " bytes for Tab in " << file << " line " << line << " function " << func << "\n";
        ::operator delete(ptr);
    }

private:
    std::string url;
    std::string title;
    std::string contents;
};

#endif // TAB_H

