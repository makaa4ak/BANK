#pragma once
#include <iostream>
#include <string>
using namespace std;

class bank
{
private:

	//const char* c_index;
	//const char* c_money;
	string index;
	string money;
	int MAX_Bank;
	//int MIN_Bank;

	//void pere(const char*, const char*)
	

	int raplate(int mon)
	{
		int max_mon=stoi(money);
		int ost_mon=0;
		bool t= true;
		while (t)
		{
			if (mon % 100 == 0)
			{
				max_mon -= mon;
				money = max_mon;
				t = false;
			}
			else
			{
				cout << "Error" << endl;
				ost_mon = mon % 100;
				mon -= ost_mon;
			}
		}
	}
	
public:
	bank(string, string, int);
	bank(int);
	bank(string, string);
	bank();
	~bank();

	void Print();
	void Input();



	
};

