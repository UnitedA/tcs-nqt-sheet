#include <bits/stdc++.h>
using namespace std;
void median(int arr[], int n)
{
    sort(arr, arr + n);
    if (n % 2 == 0)
    {
        int x1 = (n / 2) - 1;
        int x2 = (n / 2);
        cout << (double)(arr[x1] + arr[x2]) / 2;
    }
    else
    {
        cout << arr[n / 2];
    }
}
int main()
{
    int arr[] = {1, 3, 5, 6, 8};
    int n = 5;
    cout << "the median of the array is:";
    median(arr, n);
    return 0;
}