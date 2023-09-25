#include "bank.h"
#include <iostream>
#include <string>

using namespace std;

	
	
int main()
{
	bank s1("123456","1000",10000);
	//s1.Input();
	s1.Print();
	s1.Take(1000);
	s1.Print();


}