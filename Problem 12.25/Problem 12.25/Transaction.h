#pragma once
#include <string>
#include <iostream>
#ifndef TRANSACTION_H
#define TRANSACTION_H
using namespace std;

class Transaction {
public: 
	char type;
	double amount;
	double balance;
	string description;
	int date;

	double getAmount() const;

	//transaction values
	Transaction(char type, double amount, double balance, string description);

	//displays the transaction
	void display();
	
};

#endif //TRANSACTION_H