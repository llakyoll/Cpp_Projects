#include "../include/book.h"

// Constructor
Book::Book(int id,string shelf, string name, string author, int page){
    bId = id;
    bShelf = shelf;
    bName = name;
    bauthor = author;
    bPage = page;
}

string Book::getName(){
    return bName;
}
string Book::getBookShelf(){
    return bShelf;
}
string Book::getAuthor(){
    return bauthor;
}

int Book::getPageNumber(){
    return bPage;
}
int Book::getBookId(){
    return bId;
}
void Book::getInfo(){ 
    cout << "\nId : " << bId << "\nKitap Adi : " << bName << "\nYazar : " << bauthor << endl; 
}