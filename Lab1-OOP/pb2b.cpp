#include<iostream>
int div(int n)
{
    int c = 0;
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0)
            c++;
    return c;
}
