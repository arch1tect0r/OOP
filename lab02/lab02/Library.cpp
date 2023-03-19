#include "Library.h"

Library::Library() : arr(new Book[0]), size(0) {}

Library::Library(std::size_t size) : size(size), arr(new Book[size]) {}

Library::Library(std::initializer_list<Book> list) : size(list.size()), arr(new Book[list.size()]) {
    std::size_t i = 0;
    for (Book b : list)
    {
        arr[i] = b;
        i++;
    }
}

Library::Library(const Library& orig) : size(orig.size) {
    arr = new Book[orig.size];
    for (size_t i = 0; i < orig.size; i++)
    {
        arr[i] = orig.arr[i];
    }
}

Library::Library(Library&& orig) : size(orig.size), arr(std::exchange(orig.arr, nullptr)) {
    orig.size = 0;
}

Library& Library::operator=(const Library& right) {
    this->arr = right.arr;
    this->size = right.size;
    return *this;
}

Library& Library::operator=(Library&& right) {
    std::swap(this->size, right.size);
    std::swap(this->arr, right.arr);
    return *this;
}

Book& Library::operator[](std::size_t index) {
    return arr[index];
}

const Book& Library::operator[](std::size_t index) const {
    return arr[index];
}

std::size_t Library::GetSize() const {
    return size;
}

void Library::addBook(std::string author, std::string title, int index) {
    Library newLib{ size + 1 };
    for (int i = 0; i < size; i++) {
        newLib[i] = arr[i];
    }
    Book tmp = Book(author, title, index);
    newLib[newLib.GetSize() - 1] = tmp;
    *this = std::move(newLib);
}

void Library::searchForBook(std::string name, int index) {
    int temp = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i].GetTitle() == name || arr[i].GetIndex() == index) {
            std::cout << arr[i] << std::endl;
            temp = 1;
        }
    }
    if (temp == 0) {
        std::cout << "Not found!!!" << std::endl;
    }

}

void Library::deleteBook(std::string author, std::string title, int index) {
    int tmp = 0, w = 0;
    Library remBook(size - 1);
    while (w < size - 1) {
        if (arr[tmp].GetAuthor() != author && arr[tmp].GetTitle() != title && arr[tmp].GetIndex() != index) {
            remBook[w] = arr[tmp];
            w++;
        }
        tmp++;
    }
    *this = std::move(remBook);
}

void Library::showBooks() {
    std::cout << "LISTA KSIAZEK: " << std::endl;
    for (int i = 0; i < size; i++) {
        if (arr[i].GetAuthor() != "") {
            std::cout << arr[i] << std::endl;
        }

    }
}

Library::~Library() {
    this->size = 0;
    this->arr = nullptr;
}

std::ostream& operator<<(std::ostream& out, const Library& library) {
    out << "[";
    for (size_t i = 0; i < library.size; i++)
    {
        out << library.arr[i] << ", ";
    }
    out << "]";
    return out;
}

void SwapBooksInLibrary(Library& l1, Library& l2) {
    Book *temp = new Book[l1.size];
    int tempSize = l1.size;
    std::swap(temp, l1.arr);
    l1.size = l2.size;
    std::swap(l1.arr, l2.arr);
    l2.size = tempSize;
    std::swap(l2.arr, temp);
}
