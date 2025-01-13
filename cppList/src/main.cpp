#include <iostream>
#include <list>
#include "../include/save.h"
#include <cstdlib>

using namespace std;

int main(){
    string sName;
    int sId, sScore, sCount, see;
    list<Save> lst;
    cout << "Please Enter Students Count : ";
    cin >> sCount;
    for (int i = 1; i <= sCount; i++)
    {    
        cout << i << ". Student Info" << endl;
        cout << "Please Enter Student Name : ";
        cin >> sName;
        cout << "Please Enter Student ID : ";
        cin >> sId;
        cout << "Please Enter Student Score : ";
        cin >> sScore;
        Save student(sName, sId, sScore);
        lst.push_back(student);
        if (i == sCount)
        {
            system("clear");
            do 
            {
                cout << endl <<"Students info: (1)" << endl;
                cout << "Students avarage score: (2)" << endl;
                cout << "Exit: (3)" << endl;
                cout << "Do you want to make any operation : ";
                cin >> see; 
                switch (see)
                {
                case 1:
                    system("clear");
                    student.getStudent(lst);
                    break;
                case 2:
                    system("clear");
                    cout <<"Students Avarage Score: " << student.avarageScore(lst, sCount) << endl;
                    break;
                case 3:
                    cout << "System is closing!!" << endl;
                    break;
                default:
                    break;
                }
            } while (see != 3);
        }       
    }
    return 0;
}