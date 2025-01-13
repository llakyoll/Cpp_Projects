#include <iostream>
#include "../include/book.h"
#include <map>
#include <limits>

using namespace std;
void bookAdd(map<int, Book*>& mBooks, int id,string shelf, string name, string author, int page){
    mBooks[id] = new Book(id, shelf, name, author, page);
    cout << mBooks[id]->getName() << " Adli kitap kutuphaneye eklendi!" << endl;
}
void bookInfo(map<int, Book*>& Books, int id){
    if(Books.find(id) != Books.end()){
        cout << id << "'li Kitabin Bilgileri:" << endl;
        cout << "******************************" << endl;
        cout << "Kitap Adi : " << Books[id] ->getName() << endl;
        cout << "Kitap Yazari : " << Books[id] ->getAuthor() << endl;
        cout << "Kitap Sayfa Sayisi : " << Books[id] ->getPageNumber() << endl;
        cout << "Kitapin Bulundugu Raf : " << Books[id] ->getBookShelf() << endl;
    }
    else{
        cout << "Girdiginiz Id'de bir kitap yok!" << endl;
    }
    
}
void bookDelete(map<int, Book*>& Books, int id){
    if(Books.find(id) != Books.end()){
        Books.erase(id);
        cout << id << " ID'li kitap silindi!!" << endl;
    }
    else{
        cout << "Girdiginiz Id'de bir kitap yok!" << endl;
    }
}
bool isValidInput(int& choice) {
    if (choice) {
        return true;
    } else {
        cin.clear(); // Hata durumunu temizle
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Tamponu temizle
        return false;
    }
}
void listAll(map<int, Book*>& Books){
    for(const auto& book : Books){
        cout << book.first <<"Id'li Kitabin Bilgileri : " << "\n************* " << endl;
        book.second->getInfo();
    }
}

int main(){
    map<int, Book*> mBooks;
    bool exit = true;
    int userInput, bookId, bookPage, userInputId, userInputIdDelete;
    string bookName, bookAuthor, bookShelf;
    do
    {
        cout << "------| Book Management System |---------" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. List a Book" << endl;
        cout << "3. Delete Book" << endl;
        cout << "4. List All Book" << endl;
        cout << "5. Exit" << endl;
        cout << "Make a Choice : ";
        cin >> userInput;
        if (!isValidInput(userInput)) {
            cout << "Invalid input! Please enter a number." << endl;
            continue; // Döngünün başına dön
        }
        cin.ignore();
        switch (userInput)
        {
        case 1:
            system("clear");
            cout << "---______________---" << endl;
            cout << "---| Book Add |---" << endl;
            cout << "--------------------" << endl;
            cout << "Id of the Book : ";
            cin >> bookId;
            if (!isValidInput(bookId)) {
            cout << "Invalid input! Please enter a number." << endl;
            continue; // Döngünün başına dön
            }
            cout << "Page of the Book : ";
            cin >> bookPage;
            if (!isValidInput(bookPage)) {
            cout << "Invalid input! Please enter a number." << endl;
            continue; // Döngünün başına dön
            }
            cin.ignore();
            cout << "Name of the Book : ";
            getline(cin, bookName);
            cout << "Author of the Book : ";
            getline(cin, bookAuthor);
            cout << "Book Shelf : ";
            getline(cin, bookShelf);
            bookAdd(mBooks, bookId, bookShelf,bookName, bookAuthor, bookPage);
            break;
        case 2:
            system("clear");
            cout << "Biligilerini Gormek Istediginiz Kiitabin ID'si :";
            cin >> userInputId;
            bookInfo(mBooks, userInputId);
            break;
        case 3:
            system("clear");
            cout << "Biligilerini Silmek Istediginiz Kitabin ID'si :";
            cin >> userInputIdDelete;
            bookDelete(mBooks, userInputIdDelete);
            break;
        case 4:
            listAll(mBooks);
            break;
        case 5:
            exit = false;
            break;
        
        default:
            break;
        }
    }while(exit);
    
    // Dinamik nesneleri silme
    for (auto& pair : mBooks) {
        delete pair.second; // Belleği serbest bırak
    }

    mBooks.clear();
    return 0;
}