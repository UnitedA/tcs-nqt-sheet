#include <bits/stdc++.h>
using namespace std;
int sumdigit(int n)
{
    int temp = n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int n = 12;
    int digit = sumdigit(n);
    cout << digit;
}