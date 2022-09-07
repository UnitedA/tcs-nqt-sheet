#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1 = 1, num2 = 3, num3 = 10;
    cout << "The greatest of the two numbers is " << max(num1, max(num2, num3)); // max({num1,num2,num3}) ;
}