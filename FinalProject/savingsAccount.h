#ifndef H_savingsAccount
#define H_savingsAccount
#include"bankAccount.h"

class savingsAccount : public bankAccount
{
public:

	void withdrawMoney(double);
	//Compares balance after subtracting input and if below
	//0 outputs a decline message. If acceptable withdraw
	//balance is updated.
	//Post-Condition: balance is updated with new amount.

	void printMonthlyStatement();
	//Prints the summary of the savings account
	//Post-Condition: Outputs the account owner's name, number, and balance.

	void makeDeposit(double dollars);
	//Deposits money into the owners account.
	//Post-Condition: Equates the balance to itself plus dollars.

	savingsAccount(string, int, double);

protected:
	double interestRate;
};

#endif