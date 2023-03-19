#pragma once
#include <iostream>
#include "Book.h"

class ScientificBook : public Book
{
private:
    std::string author, title;
    Book* litArr;
    std::size_t litSize;
public:
    ScientificBook();
    ScientificBook(std::size_t size);
    ScientificBook(std::initializer_list<Book> list);
    ScientificBook(const ScientificBook& orig);
    ScientificBook(ScientificBook&& orig);
    
    ScientificBook(const Book& orig);
    ScientificBook(Book&& orig);
    
    void deleteScBook(std::string author, std::string title);
    
    ScientificBook& operator=(const ScientificBook& right);
    ScientificBook& operator=(ScientificBook&& right);
    Book& operator[](std::size_t index);
    const Book& operator[](std::size_t index) const;
    std::size_t GetSize() const;
    friend std::ostream& operator<<(std::ostream& out, const ScientificBook& scbook);
    
    //~ScientificBook();
};

