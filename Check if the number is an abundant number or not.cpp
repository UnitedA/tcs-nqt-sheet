#include <bits/stdc++.h>
using namespace std;
int abundant_number(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum > n)
    {
        cout << "the number is abundant:";
    }
    else
        cout << "the number is not a abundant:";
}
int main()
{
    int n = 21;
    abundant_number(n);
    return 0;
}