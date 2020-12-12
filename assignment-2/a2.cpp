#include<iostream>
#include<stdio.h>
using namespace std;

class account {
private:
	int accountBalance;
public:
	account(int balance) {
		if (balance > 0)
		{
			accountBalance = balance;
		} else {
			cout << "Balace can't be negative.. setting it to zero \n";
			balance = 0;
			accountBalance = balance;

		}
	}
	void Credit(int amount)
	{
		accountBalance += amount;

	}
	void Debit (int amount)
	{
		int temp = accountBalance - amount;
		if (temp > 0)
		{
			accountBalance -= amount;

		} else {
			cout << "Debit amount exceeded account balance. \n";
		}
	}
	int getBalance ()
	{
		return accountBalance;
	}

};
int main()
{
/*
#ifndef ONLINE_JUDGE
	freopen("input.txt" , "r" , stdin);
	freopen("output.txt", "w" , stdout);
#endif
*/
	int openBalance;
	cout << "enter the amount you want to start anjali account with? \n";
	cin >> openBalance;
	account anjali(openBalance);
	int paisa;
	cout << "enter the amount you want to add in anjali's account? \n";
	cin >> paisa;
	anjali.Credit(paisa);
	cout << anjali.getBalance() << "\n";
	double paisa1 ;
	cout << "enter the amount you want to remove in anjali's account? \n";
	cin >> paisa1;
	anjali.Debit(paisa1);
	cout << anjali.getBalance() << "\n";
	cout << "enter the amount you want to start gargi account with? \n";
	cin >> openBalance;
	account gargi(openBalance);
	cout << "enter the amount you want to add in Gargi's account? \n";
	cin >> paisa;
	gargi.Debit(paisa);
	cout << gargi.getBalance() << "\n";
	cout << "enter the amount you want to remove in Gargi's account? \n";
	cin >> paisa1;
	gargi.Debit(paisa1);
	cout << gargi.getBalance() << "\n";
    return 0;
}
