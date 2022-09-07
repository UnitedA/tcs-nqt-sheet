#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
    int series;
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            series = fib(n - 1) + 1;
        }
        return series;
    }
}
int main()
{
    int n = 5;
    cout << "the series is:" << fib(n);
    return 0;
}