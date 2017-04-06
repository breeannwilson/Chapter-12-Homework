#pragma once
using namespace std;
#include <vector>
#include <string>
#include "Transaction.h"
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
public:
	int id;
	double balance;
	static double annualInterestRate;
	string name;
	vector<Transaction> transaction;

	//default account values
	Account();

	//account values
	Account(string name, int id, double balance);

	//get functions
	string getname();
	int getid();
	double getbalance();
	double getMonthlyInterestRate();

	//set functions
	void setname(string newname);
	void setid(int newid);
	void setbalance(double newbalance);

	//withdraws certain amount
	double withdraw(const Transaction& t) {
		balance -= t.getAmount();
		transaction.push_back(t);
		return balance;
	}

	//deposits certain amount
	double deposit(const Transaction& t) {
		balance += t.getAmount();
		transaction.push_back(t);
		return balance;
	}


};

#endif //ACCOUNT_H