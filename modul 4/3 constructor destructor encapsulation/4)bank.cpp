#include<iostream>
using namespace std;

class BANK_ACCOUNT
{
	int account_no;
	float balance;
public:
	BANK_ACCOUNT(int account_no1, float account_balance)
	{

		account_no = account_no1;
		balance = account_balance;
	}


	void deposit(float amount)
	{
		balance = balance + amount;
		cout<<endl<<endl<<"The Amount is deposited successfully.\nNew balance : "<<balance;
	}

	void withdraw(float amount)
	{
		if(amount <= balance)
        {
			balance = balance - amount;
			cout<<endl<<endl<<"Amount withdrawn successfully.\nNew balance : "<<balance;
		}
		else
        {
			cout<<endl<<"Can not withdraw";
		}
	}

	void displayAccInfo(){
		cout<<endl<<endl<<"Account Number : "<<account_no;
		cout<<endl<<"Total Balance : "<<balance;
	}
};
int main()
{
	int account_no;
	float balance, deposit_amount, withdraw_amount;

	cout<<endl<<"Enter the Account Number : ";
	cin>>account_no;
	cout<<endl<<"Enter the Balance : ";
	cin>>balance;
	BankAccount bankAcc(account_no, balance);

	cout<<endl<<"Enter the deposited amount : ";
	cin>>deposit_amount;
	cout<<endl<<"Entre withdraw amount : ";
	cin>>withdraw_amount;
	bankAcc.deposit(deposit_amount);
	bankAcc.withdraw(withdraw_amount);
	bankAcc.displayAccInfo();
	return 0;
}
