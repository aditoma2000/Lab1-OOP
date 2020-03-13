/*#include <iostream>
using namespace std;

int div(int n)
{
    int c = 0;
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0)
            c++;
    return c;
}

int main()
{
    
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
*/