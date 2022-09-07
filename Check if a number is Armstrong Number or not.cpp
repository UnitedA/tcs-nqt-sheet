#include <bits/stdc++.h>
using namespace std;
bool armstrongnumber(int n)
{
    int originalnumber = n;
    int count = 0;
    int temp = n;
    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }
    int sumpower = 0;
    while (n != 0)
    {
        int digit = n % 10;
        sumpower += pow(digit, count);
        n = n / 10;
    }
    return (sumpower == originalnumber);
}
int main()
{
    int n1 = 153;
    if (armstrongnumber(n1))
    {
        cout << "Yes, it is an Armstrong Number\n";
    }
    else
    {
        cout << "No, it is not an Armstrong Number\n";
    }
    return 0;
}