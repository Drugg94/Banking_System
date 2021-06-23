#ifndef H_noServiceChargeChecking
#define H_noServiceChargeChecking

#include"checkingAccount.h"

class noServiceChargeChecking : public checkingAccount
{
public:
	void writeCheck(double amount);
	//Customer writes check to transfer money from their account.
	//Pre-Condition: Checks balance to insure balance will be above 0.
	//Post-Condition: Equates balance to new amount equal to balance minus amount.

	void printMonthlyStatement();
	//Customer receives a statement for their account.
	//Statement includes balance, name, account number,
	//checks remaining, interest rate, and minimum balance.
	//Post-Condition: Initializes the checking account printMonthlyStatement and adds
	//some more variables to the output.

	noServiceChargeChecking(string, int, double);
};



#endif