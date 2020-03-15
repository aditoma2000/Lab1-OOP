#include<iostream>

using namespace std;

bool test_prim(int n)
{	//The function checks if a given number is prime.

	if (n <= 1)
		return false;

	for (int i = 2;i <= float(n / 2);i++)
		if (n % i == 0)
			return false;
	return true;
}