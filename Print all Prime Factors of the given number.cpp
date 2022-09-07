#include <bits/stdc++.h>
using namespace std;
void primefactor(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
}
int main()
{
    int n = 60;
    cout << "prime factors are :";
    primefactor(n);
    return 0;
}