#include <bits/stdc++.h>
using namespace std;
bool positivenegative(int n)
{
    if (n > 0)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    int n = 6;
    if (positivenegative(n))
    {
        cout << "the number is a positive number:";
    }
    else
    {
        cout << "the number is a negative number:";
    }
    return 0;
}