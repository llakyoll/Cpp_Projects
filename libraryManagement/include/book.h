#include <iostream>

using namespace std;

class Book{
public:
    Book(int id,string shelf, string name, string author, int page);
    string getName();
    string getAuthor();
    string getBookShelf();
    int getPageNumber();
    int getBookId();
    void getInfo();
private:
    string bName, bauthor, bShelf, info;
    int bId, bPage;
};