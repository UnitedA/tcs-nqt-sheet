#include <bits/stdc++.h>
using namespace std;
void reverse(int arr[], int start, int end)
{
    while (start <= end)
    {
        int temp = arr[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
}
void reverseleft(int arr[], int n, int k)
{
    reverse(arr, 0, k - 1);
    reverse(arr, k, n - 1);
    reverse(arr, 0, n - 1);
}
void reverseright(int arr[], int n.int k)
{
    reverse(arr, 0, n - k - 1);
    reverse(arr, n - k, n - 1);
    reverse(arr, 0, n - 1);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 2;
    Rotateeletoright(arr, n, k);

    cout << "After Rotating the k elements to right ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}