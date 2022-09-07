#include <bits/stdc++.h>
using namespace std;
int harshad_number(int n)
{
    int temp = n;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    if (temp % sum == 0)
    {
        cout << "the no is harshad number:";
    }
    else
        cout << "it is not a harshad number:";
}
int main()
{
    int n = 378;
    harshad_number(n);
    return 0;
}