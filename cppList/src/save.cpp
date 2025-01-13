#include "../include/save.h"

Save::Save(string _name,int _id,int _score){
    name = _name;
    id = _id;
    score = _score;
}
ostream& operator<<(ostream& os, const Save& obj) {
        os << "Name: " << obj.name << ", ID: " << obj.id << ", Score: " << obj.score << endl;
        return os;
    }
void Save::getStudent(list<Save> l){
    list<Save>::iterator itr;
    for (itr = l.begin(); itr != l.end(); itr++)
    {
        cout << *itr;
    }
}

int Save::avarageScore(list<Save> l, int _sCount){
    totalScore = 0;
    list<Save>::iterator itr;
    for (itr = l.begin(); itr != l.end(); itr++)
    {
        totalScore += itr->score;
    }
    avg = totalScore /_sCount;
    return avg;
}