#include <bits/stdc++.h>
using namespace std;
// void insert_in_beginning(int *arr, int n, int value)
// {
//     for (int i = 0; i < n; i++)
//     {
//         a[i + 1] = a[i];
//     }
//     a[0] = value;
// }
// void insert_at_end(int *arr, int n, int value)
// {
//     arr[n] = value;
// }

void insert_at_position(int *arr, int n, int value, int pos)
{
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
}
int main()
{
    int arr[9] = {
        1,
        4,
        5,
        6,
        2,
        9,
        2,
        4,
    };
    int n = 8;
    int pos = 5;
    int value = 401;
    cout << "Before inserting the value at beginning:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    insert_at_position(arr, n, value, pos);

    cout << "After inserting the value at beginning:" << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}