#ifndef H_highInterestSavings
#define H_highInterestSavings
#include"savingsAccount.h"

class highInterestSavings :public savingsAccount
{
public:
	void withdrawMoney(double);

	void printMonthlyStatement();

	highInterestSavings(string, int, double);

protected:
	double minimumBalance;
};

#endif