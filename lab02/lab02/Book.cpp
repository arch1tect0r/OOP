#include "Book.h"

Book::Book() {
    this->author = "";
    this->title = "";
    this->index = 0;
}

Book::Book(std::string& author, std::string& title, int& index) : author(author), title(title), index(index) {

}

Book::Book(std::string&& author, std::string&& title, int&& index) : author(author), title(title), index(index)  {

}

Book::Book(const Book& other) : author(other.author), title(other.title), index(other.index) {

}

Book::Book(Book&& other) { // copy constructor
    this->author = other.author;
    this->title = other.title;
    this->index = other.index;
    other.author = "";
    other.title = "";
    other.index= 0;
}

std::string Book::GetAuthor() const {
    return author;
}

std::string Book::GetTitle() const {
    return title;
}

int Book::GetIndex() const {
    return index;
}

void Book::SetAuthor(std::string& author) {
    this->author = author;
}

void Book::SetTitle(std::string& title) {
    this->title = title;
}

void Book::SetIndex(int& index) {
    this->index = index;
}

void Book::SetAuthor(std::string&& author) {
    this->author = author;
}

void Book::SetTitle(std::string&& title) {
    this->title = title;
}

void Book::SetIndex(int&& index) {
    this->index = index;
}

Book& Book::operator=(const Book& right) {
    this->author = right.author;
    this->title = right.title;
    this->index = right.index;
    return *this;
}

Book& Book::operator=(Book&& right) {
    author.swap(right.author);
    title.swap(right.title);
    return *this;
}

std::ostream& operator<<(std::ostream& out, const Book& book) {
    out << book.title << " by " << book.author << " and have index: " << book.index;
    return out;
}
