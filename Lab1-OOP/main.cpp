#include<iostream>
using namespace std;
#include "pb2a.h"
#include "pb2b.h"

int main()
{	//Choose an option from the menu in order to run the solutions.

	int choice;
	do
	{
		system("CLS");
		std::cout << "MENIU" << endl;
		std::cout << "Option1:1a." << endl;
		std::cout << "Option2:1b." << endl;
		std::cout << "Option3:2a." << endl;
		std::cout << "Option4:2b." << endl;
		std::cout << "Enter your choice." << endl;
		std::cin >> choice;

		switch (choice)
		{
		/*case 1:
			int N;
			int x = 2; 

			cout << "Enter a number\n";
			cin >> N;
			while (N)
			{
				if (prim(x))
				{
					cout << x << " ";
					N--;
				}
				x++;
			}
			system("PAUSE");
			
		*/
		case 2:
			int v[100], n, c = 1, maxim = 1, start, stop;
			cin >> n;
			for (int i = 1; i <= n; i++)
				cin >> v[i];
			for (int i = 2; i <= n; i++)
				if (div(v[i - 1]) == 1 && div(v[i]) == 1)
					c++;
				else
				{
					if (c > maxim)
					{
						maxim = c;
						start = i - c;
						stop = i - 1;
					}
					c = 1;
				}
			for (int i = start; i <= stop; i++)
				cout << v[i] << ' ';
			return 0;
		

		
		}
		system("PAUSE");
	} while (choice != 5);
	return 0;

}
