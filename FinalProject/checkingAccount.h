#ifndef H_checkingAccount
#define H_checkingAccount
#include "bankAccount.h"

class checkingAccount: public bankAccount
{
public:

	virtual void writeCheck(double) = 0;

	void withdrawMoney(double);
		//Compares balance after subtracting input and if below
		//0 outputs a decline message. If acceptable withdraw
		//balance is updated.
		//Post-Condition: balance is updated with new amount.

	void printMonthlyStatement();
		//Prints the summary of the checking account
		//Post-Condition: Outputs the account owner's name, number, and balance.

	void makeDeposit(double dollars);
		//Deposits money into the owners account.
		//Post-Condition: Equates the balance to itself plus dollars.

	checkingAccount(string, int, double);

protected:
	int checksRemaining;
	double interestRate;
	double minimumBalance;
};

#endif