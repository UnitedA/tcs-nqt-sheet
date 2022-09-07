#include <bits/stdc++.h>
using namespace std;
int sortarr(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    return arr[0];
}
int main()
{

    vector<int> arr1 = {2, 5, 1, 3, 0};
    vector<int> arr2 = {8, 10, 5, 7, 9};
    cout << "The smallest element in the array is:" << sortarr(arr1);
    cout << "The smallest element in the array is:" << sortarr(arr2);

    return 0;
}