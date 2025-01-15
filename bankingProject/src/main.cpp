#include <iostream>
#include "../include/account.h"
#include <map>
#include <limits>

using namespace std;

void accountAdd(map<int, Account*>& aList, int id,string name, float balance){
    aList[id] = new Account(name, id, balance);
    cout << aList[id]->getAccountName() << " Acount Added!" << endl;
}

void moneyOperations(map<int, Account*>& account, int id){
    float money;
    int input;
    cout << "1. Add Money" << endl;
    cout << "2. Withdraw Money" << endl;
    cout << "Which operation will you make : ";
    cin >> input;
    if (account.find(id) == account.end()) {
        cout << "Account ID not found!" << endl;
        return;
    }
    if (input == 1)
    {
        cout << "How much money you want to upload?" << endl;
        cin >> money; 
        account[id]->moneyIn(money);
        cout << "!! Money Added !!" << endl;
    }
    else if(input == 2){
        cout << "How much money you want to withdraw?" << endl;
        cin >> money; 
        account[id]->moneyOut(money);
        cout << "!! Money withdrawed !!" << endl;
    }else{
        cout << "Please enter valid input!" << endl;
    }
    
}

void accountInfo(map<int, Account*>& Account, int id){
    if(Account.find(id) != Account.end()){
        cout << endl << endl <<"Account Info" << endl;
        cout << "******************************" << endl;
        cout << "Account Name : " << Account[id] ->getAccountName() << endl;
        cout << "Account No : " << Account[id] ->getAccountNo() << endl;
        cout << "Account Balance : " << Account[id] ->getAccountBalance() << endl << endl << endl;
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
// function overloading
bool isValidInput(float& choice) {
    if (choice) {
        return true;
    } else {
        cin.clear(); // Hata durumunu temizle
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Tamponu temizle
        return false;
    }
}

int main(){
    map<int, Account*> aList;
    int userInput, aNo, userInputId, userInputId2;
    string aName;
    float aBalance;
    bool exit = true;
    do
    {
        cout << "------| Bank Management System |---------" << endl;
        cout << "1. Add Account" << endl;
        cout << "2. Account Info" << endl;
        cout << "3. Money Operation" << endl;
        cout << "4. Exit" << endl;
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
            cout << "---_______________---" << endl;
            cout << "---| Add Account |---" << endl;
            cout << "--------------------" << endl;
            cout << "Account User Name : ";
            getline(cin, aName);
            cout << "Account No : ";
            cin >> aNo;
            if (!isValidInput(aNo)) {
            cout << "Invalid input! Please enter a number." << endl;
            continue; // Döngünün başına dön
            }
            cout << "Account Balance : ";
            cin >> aBalance;
            if (!isValidInput(aNo)) {
            cout << "Invalid input! Please enter a number." << endl;
            continue; // Döngünün başına dön
            }
            accountAdd(aList, aNo, aName, aBalance);
            break;
        case 2:
            system("clear");
            cout << "---________________---" << endl;
            cout << "---| Info Account |---" << endl;
            cout << "--------------------" << endl;
            cout << "No of the account whose information you would like to see :";
            cin >> userInputId;
            accountInfo(aList, userInputId);
            break;
        case 3:
            system("clear");
            cout << "---__________________---" << endl;
            cout << "---| Money Operations---" << endl;
            cout << "------------------------" << endl;
            cout << "The number of the account you want to trade with : ";
            cin >> userInputId2;
            moneyOperations(aList, userInputId2);
            break;
        case 4:
            exit = false;
            break;
        
        default:
            break;
        }
    }while(exit);

    // Dinamik nesneleri silme
    for (auto& pair : aList) {
        delete pair.second; // Belleği serbest bırak
    }

    aList.clear();
    return 0;
}

