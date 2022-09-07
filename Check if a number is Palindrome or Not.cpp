#include <bits/stdc++.h>
using namespace std;
int reverse(int x)
{
    int y = 0;
    while (x > 0)
    {
        int digit = x % 10;
        y = y * 10 + digit;
        x = x / 10;
    }
    return y;
}
int main()
{
    int x = 123;
    int temp = x;
    int rev = reverse(x);
    if (temp == rev)
    {
        cout << "the no is a palindrome:";
    }
    else
    {
        cout << "the no is not a palindrome:";
    }
}