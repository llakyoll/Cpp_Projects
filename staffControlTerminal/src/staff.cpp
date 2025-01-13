#include "../include/staff.h"

Staff::Staff(int no, string n, string p) : staffNo(no), name(n), pos(p){}

void Staff::staffInfo() const{
    cout << "Id : " << staffNo << ", Name : " << name << ", Position : " << pos << endl;
}
int Staff::getStaffNo(){
    return staffNo;
}
string Staff::getStaffName() {
    return name;
}
string Staff::getStaffPos(){
    return pos;
}