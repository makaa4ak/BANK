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

void bank::Print()
{
	cout << "------------------------------\n";
	cout << "Index User: " << index << endl;
	cout << "Money User: " << money << endl;
	cout << "------------------------------\n";
	cout << "------------BANK----------------\n";
	cout << "Bank Money: " << MAX_Bank<<endl;
}

void bank::Input()
{
}
