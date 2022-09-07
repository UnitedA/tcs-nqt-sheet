// Rearrange the array such that the first half is arranged in increasing order,
// and the second half is arranged in decreasing order
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {8, 7, 1, 6, 5, 9};
    sort(arr.begin(), arr.end());
    int n = arr.size();
    for (int i = 0; i < n / 2; i++)
    {
        cout << " " << arr[i];
    }
    for (int i = n - 1; i >= n / 2; i--)
    {
        cout << " " << arr[i];
    }
}