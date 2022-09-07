#include <bits/stdc++.h>
using namespace std;
int sortarr(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int second_smallest = arr[1];
    int second_largest = arr[arr.size() - 2];
    cout << "the second smallest element is:" << second_smallest;
    cout << "the second largest element is:" << second_largest;
}
int main()
{
    vector<int> arr1 = {1, 2, 4, 6, 7, 5};
    sortarr(arr1);
    return 0;
}