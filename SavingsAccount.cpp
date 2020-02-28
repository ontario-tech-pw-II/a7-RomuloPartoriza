#include "SavingsAccount.h"

using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate ) : Account( initialBalance ) 
{
	if(rate < 0){
		interestRate = 0;
	}
	else{
		interestRate = rate;
	}
}

double SavingsAccount::calculateInterest() {
	double b = getBalance();
	double sum;
	sum = interestRate * sum;
	b+= sum;
	setBalance(b);
	return b;
	
} 
void SavingsAccount::display(ostream & os) const
{
	
}