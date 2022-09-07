#include <bits/stdc++.h>
using namespace std;
bool evenodd(int n)
{
    int original = n;
    while (n > 0)
    {
        if (n % 2 == 0)
            return true;
        else
            return false;
    }
}
int main()
{
    int n = 5;
    if (evenodd(n))
    {
        cout << "the number is even number";
    }
    else
        cout << "the number is odd number";
}