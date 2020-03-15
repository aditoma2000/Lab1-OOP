#include<iostream>
#include<cassert>
#include "pb1a.h"
using namespace std;

void test_if_prim()
{
	assert(test_prim(2) == true);
	assert(test_prim(-1) == false);
	assert(test_prim(1) == false);
	cout << "ALL GOOD!";
}

