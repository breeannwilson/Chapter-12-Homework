#include <iostream>
#include "Account.h"
#include "Transaction.h"
#include "Date.h"
using namespace std;


void printDate(const Date& date) {
	
		cout << date.getYear()
			<< "/" << date.getMonth()
			<< "/" << date.getDay() << endl;
	}

int main() {

		//deposit $30
		Date d1;
		printDate(d1);
		Account account("George", 1122, 1000);
		Transaction t1('D', 30, account.getbalance()+30, "deposit");
		t1.display();

		//deposit $40
		Date d2(555550);
		printDate(d2);
		Transaction t2('D', 40, account.getbalance() + 40, "deposit");
		t2.display();

		//withdraw $5
		Date d3(555555550);
		printDate(d3);
		Transaction t3('W', 5, account.getbalance() - 5, "withdraw");
		t3.display();

		//withdraw $3
		Date d4;
		d4.setDate(955555550);
		printDate(d4);
		Transaction t4('W', 3, account.getbalance() - 3, "deposit");
		t3.display();
	}