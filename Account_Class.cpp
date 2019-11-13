/*****************************************/
/* Michael Leo Kokkat, N19522570 */
/* Oct 19, 2019. */
/*	This program is designed to encode
	message streams as well as decode
	(and if necessary, correct) encoded
	message streams via Hamming Code.
	It assumes that all codes are in
	the standard Hamming(7,4) format.
	The message/code input comes from
	bitstream text files.	*/
	/*****************************************/

#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <dos.h>

using namespace std;



class Account{         // classname
private:
	int accountNumber;
	double balance = 0.0;
public:
	Account(int a, double b) {
		 accountNumber = a;
		 balance = b;
	}

	int getAccountNumber() {
		return accountNumber;
	}

	double getBalance() {
		return balance;
	}

	void setBalance(double b) {
		balance = b;
	}

	void credit(double amount) {
		balance = balance + amount;
	}

	void debit(double amount) {
		if (amount > balance) {
			cout << "EXCEEDS CURRENT BALANCE" << "\n";
		}
		else {
			balance = balance - amount;
		}
	}


	void print() {

		cout << "Account = " << accountNumber << "\nBalance = " << balance << "\n";
	}

	};


int main()
{
	Account time1(18786,55);
	time1.print();
	time1.debit(50);
	time1.print();

	}

