#include <bits/stdc++.h>
using namespace std;
int max_product(vector<int> &arr)
{
    int result = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            int product = 1;
            for (int k = 0; k < j; k++)
            {
                product *= arr[i];
                result = max(result, product);
            }
        }
    }
    return result;
}
int main()
{
    vector<int> arr1 = {1, 2, 5, 6, 7, 8, 9, 10, -1, -2};
    cout << "the maximum product of the subarray is:" << max_product(arr1);
    return 0;
}