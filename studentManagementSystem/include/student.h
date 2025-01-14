#pragma once
#include <iostream>

using namespace std;

class Student{
private:
    int id, score;
    string name;
public:
    Student(int _id, string _name, int _score);
    void setId(int _id);
    void setName(string _name);
    void setScore(int _score);
    int getId();
    int getScore();
    string getName();
    void studentInfo();
};