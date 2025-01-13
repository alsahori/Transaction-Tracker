#include <iostream>
using namespace std;
int main()

{
	// declare variables
	double startBankAccount;
	int bankTransaction;
	int transactionCount = 0;
	string typeOfTransaction;
	double amountOfTransaction;
	double totalDebit = 0;
	double totalCredit = 0;

	// prompt user to put in the startBankAccount and the bank transaction of they've done that day.
	cout << " How much money did your bank account had at the start of the day?";
	cin >> startBankAccount;

	cout << " How many bank transaction were done today?";
	cin >> bankTransaction;



	while (transactionCount < bankTransaction){


		// if transaction is (debit), subtract.
		// if transaction is (credit), add.
		cout << " What type of transaction are you willing to use? (debit or credit).\n";
		cin >> typeOfTransaction;

		cout << " What is the amount of the transaction?\n";
		cin >> amountOfTransaction;


		//calculation
		if (typeOfTransaction == "debit")
		{
			startBankAccount -= amountOfTransaction;
			totalDebit += amountOfTransaction;
		}
		else if (typeOfTransaction == "credit")
		{
			startBankAccount += amountOfTransaction;
			totalCredit += amountOfTransaction;
		}
		else
		{
			cout << " Invalid transaction. Please enter (credit/debit).\n";
			
		}


		cout << "The total amount after transaction is: " << startBankAccount << endl;

		transactionCount++;
	}

	
	// print out total balance for the day

	cout << " \nThe total balance at the end of the day is: " << startBankAccount << endl;
	
	cout << "The total debit for the day is: " << totalDebit << endl;// total debit amount
	cout << "The total credit for the day is: " << totalCredit << endl;	// total credit amount


	return 0;
}

/*
How much money did your bank account had at the start of the day?1000
 How many bank transaction were done today?2
 What type of transaction are you willing to use? (debit or credit).
debit
 What is the amount of the transaction?
100
The total amount after transaction is: 900
 What type of transaction are you willing to use? (debit or credit).
credit
 What is the amount of the transaction?
100
The total amount after transaction is: 1000

The total balance at the end of the day is: 1000
The total debit for the day is: 100
The total credit for the day is: 100*/

