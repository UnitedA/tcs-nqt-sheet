#include <bits/stdc++.h>
using namespace std;
bool reverse(int x)
{
    int y = 0;
    int temp = x;
    while (x > 0)
    {
        int digit = temp % 10;
        y = y * 10 + digit;
        temp = temp / 10;
    }
    if (x == y)
        return true;
    else
        return false;
}
int main()
{
    int min = 100;
    int max = 150;
    for (int i = min; i <= max; i++)
    {
        if (reverse(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}