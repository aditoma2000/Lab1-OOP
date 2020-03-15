#include<iostream>
using namespace std;
#include "main1.h"
#include "main2.h"
#include "tests.h"


int main()
{	//Choose an option from the menu in order to run the solutions.

	int choice;
	do
	{
		system("CLS");
		std::cout << "MENIU" << endl;
		std::cout << "Option 1: PROBLEMA 1 -SILVIA PUIAC." << endl;
		std::cout << "Option 2: PROBLEMA 2 - ADRIAN TOMA." << endl;
		std::cout << "Option 3: Tests!" << endl;
		std::cout << "Enter your choice." << endl;
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			main1();
			system("PAUSE");

		case 2:
			main2();
			system("PAUSE");

		case 3:
			test_if_prim();
		
		}
	} while (choice != 3);
	return 0;

}