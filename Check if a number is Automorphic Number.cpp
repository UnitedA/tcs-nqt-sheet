#include <bits/stdc++.h>
using namespace std;
int automorphic_number(int n)
{
    int temp = n * n;
    int rem = temp;

    while (n > 0)
    {
        if ((n % 10 != temp % 10))
            return false;

        n = n / 10;
        temp = temp / 10;
    }
    return true;
}
int main()
{
    int n = 76;
    if (automorphic_number(n))
        cout << "Automorphic Number" << endl;
    else
        cout << "Not Automorphic Number" << endl;
    return 0;
}