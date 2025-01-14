#include "student.h"

Student::Student(int _id, string _name, int _score){
    id = _id;
    name = _name;
    score = _score;
}

void Student::setId(int _id){
    id = _id;
}
void Student::setName(string _name){
    name = _name;
}
void Student::setScore(int _score){
    score = _score;
}
int Student::getId(){
    return id; 
}
string Student::getName(){
    return name;
}
int Student::getScore(){
    return score;
}
void Student::studentInfo(){
    cout << "Student Id : " << id << ", Student Name : " << name << ", Student Score : " << score << endl; 
}