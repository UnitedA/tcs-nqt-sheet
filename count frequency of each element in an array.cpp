#include <bits/stdc++.h>
using namespace std;
void traverse(int a[], int n)
{
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        if (visited == true)
            continue;

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                visited == true;
                count++;
            }
        }
        cout << arr[i] << " " << count;
    }
}
int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    traverse(arr, n);
    return 0;
}