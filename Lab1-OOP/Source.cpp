/*
#include <iostream>
#include <cmath>

using namespace std;
int prim(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i <= float(n / 2); i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int N, x = 2;
    
    cout << "Enter a number\n";
    cin >> N;
    while (N)
    {
        if (prim(x))
        {
            cout<< x << " ";
            N--;
        }
        x++;
    }
    return 0;
    
    
}
*/