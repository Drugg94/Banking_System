#ifndef H_certificateOfDeposit
#define H_certificateOfDeposit
#include"bankAccount.h"

class certificateOfDeposit : public bankAccount
{
public:
	void printMonthlyStatement();

	void withdrawMoney(double);

	certificateOfDeposit(string, int, double, int);

private:
	double interestRate;
	int currentMonths;
	int matureMonths;
};


#endif