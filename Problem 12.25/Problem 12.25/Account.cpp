#include "Account.h"
#include <iostream>
#define NULL 0
using namespace std;

double Account::annualInterestRate = 1.5;

//set the defaults to zero
Account::Account() {
	name = "empty";
	id = 0;
	balance = 0.0;
}

//set up the account details
Account::Account(string newname, int newid, double newbalance) {
	name = newname;
	id = newid;
	balance = newbalance;
}

//get name
string Account::getname() {
	return name;
}
//set name
void Account::setname(string newname) {
	name = newname;
}

//get id number
int Account::getid() {
	return id;
}
//set id number
void Account::setid(int newid) {
	id = newid;
}

//get balance
double Account::getbalance() {
	return balance;
}
//set balance
void Account::setbalance(double newbalance) {
	balance = newbalance;
}


//get monthly interest rate
double Account::getMonthlyInterestRate() {
	double monthlyinterestrate = annualInterestRate / 12;
	return monthlyinterestrate;
}