#include <iostream>
#include <list>
using namespace std;

class Save
{
private:
    string name;
    int id, score, avg;
    int totalScore = 0;
public:
    Save(string _name,int _id,int score);
    void getStudent(list<Save> l);
    int avarageScore(list<Save> l,int _sCount);
    friend ostream& operator<<(ostream& os, const Save& obj);
};
