#include <bits/stdc++.h>
using namespace std;
int reversearr(vector<int> arr)
{
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        cout << arr[i];
    }
}
int main()
{
    vector<int> arr1 = {5, 4, 3, 2, 1};
    reversearr(arr1);
    return 0;
}