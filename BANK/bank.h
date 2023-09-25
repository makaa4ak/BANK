#pragma once
#include <iostream>
#include <string>
using namespace std;

class bank
{
private:

	
	string index;
	string money;
	int MAX_Bank;

	int index_size = 6;

	int MON_100 = 4;
	int MON_200 = 4;
	int MON_500 = 4;
	int MON_1000 = 4;
	
	
	int nomenal()
	{
		int SUM=0;

		SUM += MON_1000 * 1000;
		SUM += MON_500 * 500;
		SUM += MON_200 * 200;
		SUM += MON_100 * 100;
		return SUM;
	}

	bool raplate(int mon)
	{
		int max_mon=stoi(money);
		int ost_mon=0;
		bool t= true;
		while (t)
		{
			if (mon % 100 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	
	
public:
	bank(string, string, int);
	bank(int);
	bank(string, string);
	bank();
	~bank();

	int prover_ind();

	void Print();
	void Input();

	void Take();


	
};

