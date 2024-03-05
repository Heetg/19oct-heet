#include<iostream>
using namespace std;
class bankACCOUNT{

	string depositer_name;
	int ACCOUNT_no;
	string ACCOUNT_detail;
	int balance;

public :
	void assign_value(string depositer_name1, int ACCOUNT_no1, string ACCOUNT_DETAIL1, int balance1)
	{
		depositer_name = depositer_name1;
		ACCOUNT_no = ACCOUNT_no1;
		ACCOUNT_detail = ACCOUNT_detail1;
		balance = balance1;
	}


	void deposited(int amount)
	{
		balance = balance + amount;
		cout<<endl<<"The Amount is deposited successfully."<<endl<<"New balance after deposit :"<<balance<<endl;
	}
	void withdraw(int amount)
	{
		if(amount > balance){
			cout<<endl<<"you Cannot withdraw."<<endl;
		}
		else
        {
			balance = balance - amount;
			cout<<endl<<"The Amount is withdrawn successfully."<<endl<<"New balance :"<<balance<<endl;
		}
	}

	void display()
	{
		cout<<endl<<endl<<"Depositor Name : "<<depositer_name;
		cout<<endl<<"Account Number : "<<ACCOUNT_no;
		cout<<endl<<"Account Type : "<<ACCOUNT_DETAIL;
		cout<<endl<<"Balance : "<<balance;
	}
}
myaccount;

int main(){
	string name, account_type;
	int ACCOUNT_no, balance, deposite_amount, withdraw_amount;
	cout<<"\nEnter the name of depositor : ";
	cin>>name;
	cout<<"\nEnter account number : ";
	cin>>ACCOUNT_no;
	cout<<"\nEnter account detail : ";
	cin>>ACCOUNT_detail;
	cout<<"\nEnter your total balance : ";
	cin>>balance;

	myaccount.assign_value(name, ACCOUNT_no, ACCOUNT_detail, balance);

	cout<<"\nEnter the amount to be deposited : ";
	cin>>deposite_amount;
	cout<<"\nEnter amount to be withdrawn : ";
	cin>>withdraw_amount;

	myaccount.deposited(deposite_amount);
	myaccount.withdraw(withdraw_amount);
	myaccount.display();
	return 0;
}
