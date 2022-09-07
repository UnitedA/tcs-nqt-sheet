#include <bits/stdc++.h>
using namespace std;
// int repeating_elements(vector<int> &arr)
// {
//     sort(arr.begin(), arr.end());
//     cout << "the repeated elements are:";
//     for (int i = 0; i < arr.size() - 1; i++)
//     {
//         if (arr[i] == arr[i + 1])
//         {
//             cout << arr[i];
//         }
//     }
// }
void repeating_elements(vector<int> &arr)
{
    unordered_map<int, int> element_count;
    for (auto i : arr)
    {
        ++element_count[i];
    }
    cout << "the repeating elements are:";
    for (auto i : element_count)
    {
        if (i.second > 1)
        {
            cout << i.first << " ";
        }
    }
}
int main()
{
    vector<int> arr1 = {1, 1, 1, 4, 4, 6, 7, 8};
    repeating_elements(arr1);
    return 0;
}