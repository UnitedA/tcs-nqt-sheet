#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
}
int main()
{
    int min = 10;
    int max = 20;
    for (int i = min; i <= max; i++)
    {
        if (isprime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}