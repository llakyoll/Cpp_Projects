#include <iostream>
#include "../include/student.h"
#include <list>

using namespace std;

void showMenu(){
    cout << "----------------" << endl;
    cout << "------Menu------" << endl;
    cout << "----------------" << endl;
    cout << "1. New Student " << endl;
    cout << "2. Show All Students " << endl;
    cout << "3. Search Student " << endl;
    cout << "4. Delete Student " << endl;
    cout << "5. Exit " << endl;
    cout << "-> Choose an operation : ";
}
void addStudent(list<Student>* students){
    int id, score;
    string name;
    cout << "Please Enter Student Id : ";
    cin >> id;
    cin.ignore();
    cout << "Please Enter Student Name : ";
    getline(cin, name);
    cout << "Please Enter Student Score:";
    cin >> score;
    students->push_back(Student(id, name, score));
}
void showAll(list<Student>* students){
    list<Student>::iterator it;
    for (it = students->begin(); it!=students->end(); it++)
    {
        cout << "Student Id: " << it->getId() << ", Name: " << it->getName() << ", Score: " << it->getScore() << endl; 
    }
}
void searchStudent(list<Student>* students){
    list<Student>::iterator it;
    int userInput;
    bool isFound = false;
    cout << "Please Enter Student Id : ";
    cin >> userInput;
    for (it = students->begin(); it!=students->end(); it++)
    {
        if (it->getId() == userInput)
        {
            if (isFound==false)
            {
               cout << "Name: " << it->getName() << ", Score: " << it->getScore() << endl;
               isFound = true;
            }
        }
    }
    if (isFound == false)
    {
        cout << "Student not found!" << endl;
    }
    
}
void deleteStudent(list<Student>* students){
    list<Student>::iterator it;
    int userInput;
    bool isFound = false;
    cout << "Please Enter Student Id : ";
    cin >> userInput;
    for (it = students->begin(); it!=students->end(); it++)
    {
        if (it->getId() == userInput && isFound==false)
        {
            students->erase(it);
            cout << "Student Deleted!" << endl;
            isFound = true; 
            break;
        }
    }
    if (isFound == false)
    {
        cout << "Student not found!" << endl;
    }
}


int main(){
    bool exit = true;
    int menuChoice;
    list<Student>* studentList = new list<Student>;
    do
    {
        showMenu();
        cin >> menuChoice;
        switch (menuChoice)
        {
        case 1:
            system("clear");
            addStudent(studentList);
            break;
        case 2:
            system("clear");
            showAll(studentList);
            break;
        case 3:
            system("clear");
            searchStudent(studentList);
            break;
        case 4:
            system("clear");
            deleteStudent(studentList);
            break;
        case 5:
            exit = false;
            system("clear");
            cout << "Bye bye !!" << endl;
            break;
        
        default:
            system("clear");
            cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
            cout << "!!!Please enter a valid number!!! " << endl;
            cout << "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
            break;
        }
        
    } while (exit);
    
    delete studentList;
    return 0;
}