//Code author Adam Jones || 11-28-22 || CS1336 || Frizell

#include <iostream>
#include <fstream>
#include <iomanip>

void MakeWithdrawal (float, float&);
void MakeDeposit (float, float&);

using namespace std;
ofstream statement;
int main() 
{
    ifstream account;
    ifstream trans;
    account.open("account.txt");
    trans.open("transactions.txt");
    statement.open("statement.txt");

    float bal, amount;
    int count;
    char typ;

    account >> bal;
    statement << "Starting Balance : " << bal << endl;
    statement << fixed << showpoint << setprecision(2);
    while (trans)
    {
        if (!trans.eof()) {
        trans >> typ >> amount;

        if (typ == 'W') {
            MakeWithdrawal(amount, bal);
            count++;
        } else if (typ == 'D') {
            MakeDeposit(amount, bal);
            count++;
        }

        }
        if (trans.eof()) {
            statement << "\nThere were " << count << " total transactions this month" << endl;
            statement << "The ending balance is : $ " << bal << endl;
            exit(0);
        }
    }
    trans.close();
    account.close();
    statement.close();
    return 0;
}

void MakeWithdrawal(float amount, float& bal)
{
    if (bal < 0)
    {
        amount += 30;
    }
    bal -= amount;
    statement << "Amount withdrawn : $" << amount << " Updated balance : $" << bal << endl;
}

void MakeDeposit (float amount, float& bal)
{
    bal += amount;
    statement << "Amount deposited : $" << amount << " Updated balance : $" << bal << endl;

}