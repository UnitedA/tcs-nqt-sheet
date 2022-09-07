#include <bits/stdc++.h>
using namespace std;
bool perfectnumber(int n)
{
    int sum = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (n % i == 0)
            sum = sum + i;
    }
    if (n == sum)
        return true;
    else
        return false;
}
int main()
{
    bool x = perfectnumber(5);
    bool u = perfectnumber(6);
    bool f = perfectnumber(23);
    if (x == true)
    {
        cout << "5 is a perfect number" << endl;
    }
    else
        cout << "5 is not a perfect number" << endl;

    if (u == true)
    {
        cout << "6 is a perfect number" << endl;
    }
    else
        cout << "6 is not a perfect number" << endl;

    if (f == true)
    {
        cout << "23is a perfect number" << endl;
    }
    else
        cout << "23 is not a perfect number" << endl;

    return 0;
}
