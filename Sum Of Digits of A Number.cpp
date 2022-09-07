#include <bits/stdc++.h>
using namespace std;
int sumdigit(int n)
{
    int temp = n;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    return sum;
}
int main()
{
    int n = 472;
    cout << "the sum of digit is:";
    int rem = sumdigit(n);
    cout << rem;
}