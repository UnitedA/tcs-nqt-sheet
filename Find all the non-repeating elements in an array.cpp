#include <bits/stdc++.h>
using namespace std;
void non_repeating_elements(vector<int> &arr)
{
    unordered_map<int, int> element_count;
    for (auto i : arr)
    {
        ++element_count[i];
    }
    for (auto i : element_count)
    {
        if (i.second == 1)
        {
            cout << i.first << " ";
        }
    }
}
int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 1, 1, 2, 6};
    non_repeating_elements(arr1);
    return 0;
}