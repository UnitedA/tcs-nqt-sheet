#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    int fac = 1;
    for (int i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
}
int strong_number(int num)
{
    int digit = 0;
    int sum = 0;
    while (num > 0)
    {
        digit = num % 10;
        sum = sum + fact(digit);
        num = num / 10;
    }
    return sum;
}
int main()
{
    int n = 145;
    int x = strong_number(n);
    if (x == n && x != 0)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
}