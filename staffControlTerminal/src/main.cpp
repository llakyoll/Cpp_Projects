#include <vector>
#include <iostream>
#include <string>
#include <limits>
#include "../include/staff.h"

using namespace std;
bool isValidInput(int& choice) {
    if (choice) {
        return true;
    } else {
        cin.clear(); // Hata durumunu temizle
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Tamponu temizle
        return false;
    }
}

int main(){
    vector<Staff> staff;
    bool exit = true;
    int mainChoice, choiceId, sId = 1;
    string sName, sPos;
    
    do
    {
        cout << "------| Staff Management System |---------" << endl;
        cout << "1. Add Staff" << endl;
        cout << "2. List Staff" << endl;
        cout << "3. Search Staff" << endl;
        cout << "4. Delete Staff" << endl;
        cout << "5. Exit" << endl;
        cout << "Make a Choice : ";
        cin >> mainChoice;
        if (!isValidInput(mainChoice)) {
            cout << "Invalid input! Please enter a number." << endl;
            continue; // Döngünün başına dön
        }
        cin.ignore();
        switch (mainChoice)
        {
        case 1:
            system("clear");
            cout << "---______________---" << endl;
            cout << "---| Staff Add |---" << endl;
            cout << "--------------------" << endl;
            cout << "Name of the Staff : ";
            getline(cin, sName);
            cout << "Position of the Staff : ";
            getline(cin, sPos);
            staff.push_back(Staff(sId, sName, sPos));
            sId = sId + 1;
            break;
        case 2:
            system("clear");
            if(staff.size() > 0){
            cout << "---______________---" << endl;
            cout << "---| Staffs Info |---" << endl;
            cout << "--------------------" << endl;
            for(const Staff& s : staff){
                s.staffInfo();
            }
            }
            else{
                cout << "No Staff on The List" << endl;
            }
            cout << endl << endl;
            cin.get();
            break;
        case 3:
            system("clear");
            if (staff.size() > 0)
            {
                cout << "---______________---" << endl;
                cout << "---| Staff Info |---" << endl;
                cout << "--------------------" << endl;
                cout << "Please Enter Staff Id : ";
                cin >>choiceId;
                staff[choiceId - 1].staffInfo();
            }else
            {
                cout << "No Staff on The List" << endl;
            }
            
            break;
        case 4:
            system("clear");
            if (staff.size() > 0)
            {
                cout << "---______________---" << endl;
                cout << "---| Staff Delete |---" << endl;
                cout << "--------------------" << endl;
                cout << "Please Enter Staff Id : ";
                cin >>choiceId;
                for (auto it = staff.begin(); it <= staff.end(); it++)
                {
                    if (it->getStaffNo() == choiceId)
                    {
                        staff.erase(it);
                        cout << "Staff is deleted!!" << endl;
                    }else
                    {
                        cout << "Invalid ID!!" << endl;
                    }
                    
                }
                
            }else
            {
                cout << "No Staff on The List" << endl;    
            }
            break;
        case 5:
            exit = false;
            break;
        default:
            cout << "Please Enter Valid Number!!" << endl;
            break;
        }
    } while (exit);
    

    return 0;
}