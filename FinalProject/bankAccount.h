#ifndef H_bankAccount
#define H_bankAccount
#include<string>

using namespace std;

class bankAccount
{
public:
	string getAccountOwner() const;
		//Returns account owner name.
		//Post-Condition: Assigned variable equates to the owner name.

	int getAccountNumber() const;
		//Returns account number.
		//Post-Condition: Assigned variable equates to the account number.

	void makeDeposit(double dollars);
		//

	double getAccountBalance() const;
		//Return account balance.
		//Post-Condition: Account balance is equated to the variable.

	bankAccount(string n, int account, double bal);

	virtual void withdrawMoney(double) = 0;

	virtual void printMonthlyStatement() = 0;

protected:
	string name;
	int accountNumber;
	double balance;
};

#endif
