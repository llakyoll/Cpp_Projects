#include "../include/account.h"

Account::Account(string name,int no,float balance = 0){
    aName = name;
    aNo = no;
    aBalance = balance;
}

string Account::getAccountName(){
    return aName;
}
int Account::getAccountNo(){
    return aNo;
}
float Account::getAccountBalance(){
    return aBalance;
}
void Account::moneyIn(float money){ 
    aBalance = aBalance + money;
}
void Account::moneyOut(float money){
    try
    {   
        if (aBalance >= money)
        {
            aBalance -= money;
        }else
        {
            throw aBalance;
        }       
    }
    catch(float balance)
    {
        cout << "Your balance is lower!" << endl;
        cout << "Your Balance : " << balance << endl;
    }
    
}