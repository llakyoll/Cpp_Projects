#include <iostream>

using namespace std;

class Account{
private:
    string aName;
    int aNo;
    float aBalance;
public:
    Account(string name,int no,float balance);
    string getAccountName();
    int getAccountNo();
    float getAccountBalance();
    void moneyIn(float money);
    void moneyOut(float money);
};