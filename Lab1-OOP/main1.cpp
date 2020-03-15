#include<iostream>
using namespace std;
#include "pb1a.h"
#include "pb1b.h"

int main1()
{	//Choose an option from the menu in order to run the solutions.

	int choice;
	do
	{
		system("CLS");
		cout << "MENIU" << endl;
		cout << "Option1:1a." << endl;
		cout << "Option2:1b." << endl;
		cout << "Enter your choice." << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			int n;
			cout << "n=:";
			cin >> n;
			cout << "Die Primzahlen kleiner als " << n << " sind:" << endl;
			for (int i = 2; i <= n; i++)
				if (test_prim(i) == true)
					cout << " " << i;
			cout << endl;
			system("PAUSE");
			break;

		case 2:
			int v[] = { 9,8,7,-2,3,5,7,88,99 };
			int secv_max = 0, nr = 1, st = 1, dr = 0;

			for (int i = 0; i < sizeof(v) / sizeof(v[0]); i++)
			{
				if (v[i + 1] > v[i])
					nr++;
				else
				{
					if (nr > secv_max)
					{
						secv_max = nr;
						st = i - nr + 1;
						dr = i;
					}
					nr = 1;
				}
			}
			langste_Sequenz(v, st, dr);
			cout << endl;
			system("PAUSE");


		}
	} while (choice != 5);
	return 0;

}
