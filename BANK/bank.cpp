#define _CRT_SECURE_NO_WARNINGS

#include "bank.h"
#include <iostream>
#include <string>

using namespace std;

bank::bank(string ind, string mon,  int max)
{
	index = ind;
	money = mon;
	
	MAX_Bank = max;
}
bank::bank( int max)
{
	money = "0";
	index = "0";
	MAX_Bank = max;
}
bank::bank(string ind, string mon)
{
	money = mon;
	index = ind;
	MAX_Bank = 0;
}
bank::bank()
{
money = "0";
	index = "0";
	MAX_Bank = 0;

}
bank::~bank()
{
	money = "0";
	index = "0";
	MAX_Bank = 0;
}

int bank::prover_ind()
{

	
	while (true)
	{
		int numb = index.size();
		cout << "------------------------------\n";
		if (numb != index_size)
		{
			cout << "Error!!!" << endl;
			cout << "Index User: ";
			getline(cin, index);
		}
		else
			break;
	}
	return 0;
}

void bank::Print()
{
	prover_ind();
	cout << "------------------------------\n";
	cout << "Index User: " << index << endl;
	cout << "Money User: " << money << endl;
	cout << "------------------------------\n";
	cout << "------------BANK--------------\n";
	cout << "Bank Money: " << MAX_Bank<<endl;
	cout << "------------------------------\n";
}
void bank::Input()
{
	cout << "------------USER--------------\n";
	cout << "Index (6 number): ";
	getline(cin, index);
	cout << "Money: ";
	getline(cin, money);
	cout << "------------------------------\n";

}

void bank::Take()
{
	int minus_money = 0;
	cout << "------------take money--------------\n";
	int nm_money = stoi(money);

	while (true)
	{
		cout << "Take of money: ";
		cin >> minus_money;
		if (raplate(minus_money))
			break;
	}
	if (nm_money >= minus_money && MAX_Bank >= minus_money && nomenal()>= minus_money)
	{
		while (true)
		{
			if (minus_money >= 1000 && MON_1000 != 0)
			{
				MON_1000 -= 1;
				minus_money -= 1000;
				MAX_Bank -= 1000;
				nm_money -= 1000;
				money = to_string(nm_money);
			}
			else if (minus_money >= 500 && MON_500 != 0)
			{
				MON_500 -= 1;
				minus_money -= 500;
				MAX_Bank -= 500;
				nm_money -= 500;
				money = to_string(nm_money);
			}
			else if (minus_money >= 200 && MON_200 != 0)
			{
				MON_200 -= 1;
				minus_money -= 200;
				MAX_Bank -= 200;
				nm_money -= 200;
				money = to_string(nm_money);
			}
			else if (minus_money >= 100 && MON_100 != 0)
			{
				MON_100 -= 1;
				minus_money -= 100;
				MAX_Bank -= 100;
				nm_money -= 100;
				money = to_string(nm_money);
			}
			else
			{
				cout << "FINAL!!!!!\n";
				break;
			}
		}
	}
	else
		cout << "Not Money!!!!!" << endl;


}
/*
	cout << "------------take money--------------\n";
	int nm_money= stoi(money);
	cout << nm_money << " - " << minus_money << endl;
	if (nm_money >= minus_money && MAX_Bank >= minus_money)
	{
		MAX_Bank -= minus_money;
		nm_money -= minus_money;
		money = to_string(nm_money);
		
	}
	else
		cout << "Error - money not!!!!" << endl;

		*/