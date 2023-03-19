#include "ScientificBook.h"

ScientificBook::ScientificBook() : litArr(new Book[0]), litSize(0) {}

ScientificBook::ScientificBook(std::size_t size) : litSize(litSize), litArr(new Book[litSize]) {}

ScientificBook::ScientificBook(std::initializer_list<Book> list) : litSize(list.size()), litArr(new Book[list.size()]) {
    std::size_t i = 0;
    for (Book b : list)
    {
        litArr[i] = b;
        i++;
    }
}

ScientificBook::ScientificBook(const ScientificBook& orig) : litSize(orig.litSize), author(orig.GetAuthor()), title(orig.GetTitle()) {
    litArr = new Book[orig.litSize];
    for (size_t i = 0; i < orig.litSize; i++)
    {
        litArr[i] = orig.litArr[i];
    }
}

ScientificBook::ScientificBook(ScientificBook&& orig) : litSize(orig.litSize), litArr(std::exchange(orig.litArr, nullptr)) {
    orig.litSize = 0;
    this->author = orig.GetAuthor();
    this->title = orig.GetTitle();
}

//-----------------------//

ScientificBook::ScientificBook(const Book& orig) : litSize(0), author(orig.GetAuthor()), title(orig.GetTitle())
{
    litArr = new ScientificBook[0];
}

ScientificBook::ScientificBook(Book&& orig) : litSize(0) {
    litArr = new ScientificBook[0];
    this->author = orig.GetAuthor();
    this->title = orig.GetTitle();
}

//-----------------------//

void ScientificBook::deleteScBook(std::string author, std::string title) {
    int tmp = 0, w = 0;
    ScientificBook remBook(litSize - 1);
    while (w < litSize - 1) {
        if (litArr[tmp].GetAuthor() != author && litArr[tmp].GetTitle() != title) {
            remBook[w] = litArr[tmp];
            w++;
        }
        tmp++;
    }
    *this = std::move(remBook);
}

ScientificBook& ScientificBook::operator=(const ScientificBook& right) {
    this->litArr = right.litArr;
    this->litSize = right.litSize;
    return *this;
}

ScientificBook& ScientificBook::operator=(ScientificBook&& right) {
    std::swap(this->litSize, right.litSize);
    std::swap(this->litArr, right.litArr);
    return *this;
}


Book& ScientificBook::operator[](std::size_t index) {
    return litArr[index];
}

const Book& ScientificBook::operator[](std::size_t index) const {
    return litArr[index];
}

std::size_t ScientificBook::GetSize() const {
    return litSize;
}

std::ostream& operator<<(std::ostream& out, const ScientificBook& scbook) {
    out << "[";
    for (size_t i = 0; i < scbook.litSize; i++)
    {
        out << scbook.litArr[i] << ", ";
    }
    out << "]";
    return out;
}
