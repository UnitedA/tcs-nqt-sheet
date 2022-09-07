#include <bits/stdc++.h>
using namespace std;
int divide(int n)
{
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{
    int n = 6;
    cout << "the divisors are:";
    divide(n);
    return 9;
}