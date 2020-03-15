#include<iostream>
#include "pb1b.h"

void langste_Sequenz(int v[], int st, int dr)
{	//This function prints the first longest sequence of numbers with increasing value.

	if (dr == 0)
		std::cout << "Es gibt keine ansteigende zusammenhangende Teilfolge.";
	else
	{
		std::cout << "Die langste ansteigende zusammenhangende Teilfolge: ";
		for (int i = st;i <= dr;i++)
			std::cout << v[i] << " ";
	}

}

