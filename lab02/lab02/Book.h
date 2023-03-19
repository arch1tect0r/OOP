#pragma once

#include <iostream>

class Book
{
private:
    std::string author, title;
    int index;
public:
    Book();
    Book(std::string& author, std::string& title, int& index); //l-references
    Book(std::string&& author, std::string&& title, int&& index); //r-references
    Book(const Book& other);
    Book(Book&& other);
    std::string GetAuthor() const;
    std::string GetTitle() const;
    int GetIndex() const;
    void SetAuthor(std::string& author);
    void SetTitle(std::string& title);
    void SetIndex(int& index);
    void SetAuthor(std::string&& author);
    void SetTitle(std::string&& title);
    void SetIndex(int&& index);
    Book& operator=(const Book& right);
    Book& operator=(Book&& right);
    friend std::ostream& operator<<(std::ostream& out, const Book& book);
};
