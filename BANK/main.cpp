#include "bank.h"
#include <iostream>
#include <string>

using namespace std;

	
	
int main()
{
	bank s1("100","100", 10000);
	s1.Print();
	bank s2(1000);
	s2.Print();
}