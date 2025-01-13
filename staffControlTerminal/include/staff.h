#include <iostream>

using namespace std;

class Staff{
private:
    int staffNo;
    string name, pos;
public:
    Staff(int no, string n, string p);
    void staffInfo() const;
    int getStaffNo();
    string getStaffName();
    string getStaffPos();
};