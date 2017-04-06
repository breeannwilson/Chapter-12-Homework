#include "Transaction.h"

//transaction values
Transaction::Transaction(char newtype, double newamount, double newbalance, string newdescription) {
	type = newtype;
	amount = newamount;
	balance = newbalance;
	description = newdescription;
}

double Transaction::getAmount() const {
	return amount;
}

//display transaction
void Transaction::display() {
		cout << type << " " << amount << " " << balance << " " << description << endl;
}

