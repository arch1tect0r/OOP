#include <iostream>
#include "Book.h"
#include "Library.h"
#include "ScientificBook.h"



void BookInit() {
    std::string a = "Danylo", t = "Byte of Python";
    int i = 1;
    Book e;
    std::cout << "e: " << e << std::endl;
    Book b1 = { a, t, i };
    std::cout << "book 1: " << b1 << std::endl;
    Book b2 = { "Michał","C++ for beginners", 2 };
    std::cout << "book 2: " << b2 << std::endl;
    Book b3 = b1;
    std::cout << "book 3: " << b3 <<"\nbook 1: " << b1 << std::endl;
    e = std::move(b2);
    std::cout << "e: " << e << "\nbook 2:" << b2 << std::endl;
    e.SetAuthor("Rafał");
    std::cout << "e: " << e << std::endl;
    e.SetTitle("Ruby in business");
    std::cout << "e: " << e << std::endl;
    // Zad 1
    std::string a2 = "Somebody", t2 = "Something";
    int i2 = 3;
    Book t1 = {a2, t2, i2};
    std::cout << "title 1: " << t1 << std::endl;
    std::cout << "+------------------------+" << std::endl;
}

void LibraryInit() {
    Library e;
    std::cout << "e: " << e << std::endl;
    //3-5 books
    Library l1 = { {"Danylo", "Byte of Python", 4},
    {"Michał", "C++ for beginners", 5},
    {"Rafał", "Ruby in business", 6} };
    std::cout << "library 1: " << l1 << std::endl;
    Library l2(2);
    std::cout << "library 2: " << l2 << std::endl;
    l2[0] = { "Michał", "C++ for beginners", 7 };
    l2[1] = { "Rafał", "Ruby in business", 8 };
    std::cout << "library 2: " << l2 << std::endl;
    e = std::move(l2);
    std::cout << "e: " << e << "\nlibrary 2: " << l2 << std::endl;
    l1[0] = std::move(e[1]);
    std::cout << "library 1: " << l1 << " e: " << e << std::endl;
    std::cout << "+------------------------+" << std::endl;
}

void LastTests() {
    Library l1 = {
        {"Danylo Lohachow", "Byte of Python", 6},
        {"Michał", "C++ for beginners", 7},
        {"Rafał", "Ruby in business", 8}
    };
    Library l2 = {
        {"Paweł", "Alghoritms", 9},
        {"Jakub", "100 lat", 10}
    };

    std::cout << "BEFORE SWAP:" << std::endl;
    std::cout << "library 1: " << l1 << std::endl;
    std::cout << "library(getSize) 1: " << l1.GetSize() << std::endl;
    std::cout << "library 2: " << l2 << std::endl;
    std::cout << "library(getSize) 2: " << l2.GetSize() << std::endl;
    std::cout << "+------------------------+" << std::endl;

    SwapBooksInLibrary(l1, l2);

    std::cout << "AFTER SWAP:" << std::endl;
    std::cout << "library 1: " << l1 << std::endl;
    std::cout << "library 1(getSize): " << l1.GetSize() << std::endl;
    std::cout << "library 2: " << l2 << std::endl;
    std::cout << "library 2(getSize): " << l2.GetSize() << std::endl;
    std::cout << "+------------------------+" << std::endl;
}

void InitScBook() {
    std::string a = "DanyloSc", t = "Byte of Python-Sc";
    int i = 1;
    ScientificBook ScBook;
    std::cout << "ScBook: " << ScBook << std::endl;
    Book b1 = { a, t, i };
    std::cout << "Scbook 1: " << b1 << std::endl;
    Book b2 = { "MichałSc","C++ for beginners-Sc", 2 };
    std::cout << "Scbook 2: " << b2 << std::endl;
    Book b3 = b1;
    std::cout << "Scbook 3: " << b3 <<"\nScbook 1: " << b1 << std::endl;
    ScBook = std::move(b2);
    std::cout << "ScBook: " << ScBook << "\nScbook 2:" << b2 << std::endl;
    ScBook.SetAuthor("Rafał");
    std::cout << "ScBook: " << ScBook << std::endl;
    ScBook.SetTitle("Ruby in business");
    std::cout << "ScBook: " << ScBook << std::endl;
}



int main()
{
    
    Library lib;
    BookInit();
    LibraryInit();
    LastTests();
    InitScBook();

    int exit = 0;
    int choice = 0;
    int index = 0;
    
    while(exit != 5) {
        std::cout << "Enter your choice: " << std::endl;
        std::cin >> choice;
        switch (choice) {
            case 1: {
                std::string author, title;
                std::cin >> author;
                std::cin >> title;
                std::cin >> index;
                lib.addBook(author, title, index);
                continue;
            }
            case 2: {
                std::string name;
                std::cin >> name;
                std::cin >> index;
                lib.searchForBook(name, index);
                continue;
            }
            case 3: {
                lib.showBooks();
                continue;
            }
            case 4: {
                std::string author, title;
                std::cin >> author;
                std::cin >> title;
                std::cin >> index;
                lib.deleteBook(author, title, index);
                continue;
            }
            case 5: {
                return 0;
            }
            default:
                break;
        }
    }
}
