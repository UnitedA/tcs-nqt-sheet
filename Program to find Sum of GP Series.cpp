#include <bits/stdc++.h>
#include <math.h>
using namespace std;
float sumofgp(float a, float r, int n)
{
    float sum = a * (pow(r, n) - 1) / (r - 1);
    return sum;
}
int main()
{
    float a = 2;
    float r = 2;
    int n = 4;
    cout << "Sum of GP Series is " << sumofgp(a, r, n);
    return 0;
}