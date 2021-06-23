#ifndef H_highInterestChecking
#define H_highInterestChecking
#include"noServiceChargeChecking.h"

class highInterestChecking : public noServiceChargeChecking
{
public:
	void writeCheck(double);

	void printMonthlyStatement();

	highInterestChecking(string, int, double);
};


#endif
