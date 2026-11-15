
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
enum class Currency {
    PKR,
    USD,
    EUR
};


class Account {
private:
    int accountNumber;
    string accountHolder;
    double balance;
    Currency currency;

public:
    
    Account(int accNo, string name, double initialBalance,
            Currency curr) {

        if (initialBalance < 0) {
            throw invalid_argument("Balance cannot be negative!");
        }

        accountNumber = accNo;
        accountHolder = name;
        balance = initialBalance;
        currency = curr;
    }

   
    int getAccountNumber() const {
        return accountNumber;
    }

    string getAccountHolder() const {
        return accountHolder;
    }

    double getBalance() const {
        return balance;
    }

    Currency getCurrency() const {
        return currency;
    }

   
protected:
    void updateBalance(double amount) {
        balance = amount;
    }

public:
   
    virtual double calculateInterest() const = 0;

    virtual double deductFees() const = 0;

    
    virtual ~Account() {}
};


int main() {

    cout << "MULTI-CURRENCY BANKING SYSTEM" << endl;
    cout << "Abstract Account Class Created Successfully!" << endl;

    return 0;
}

