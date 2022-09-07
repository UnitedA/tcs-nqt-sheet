#include <bits/stdc++.h>
using namespace std;
// method-1
//  int main()
//  {
//      int n = 6;
//      int arr[] = {1, 4, 5, 7, 8, 3};
//      for (int i = 0; i < n; i++)
//      {
//          set<int> s;
//          for (int j = 0; j < n; j++)
//          {
//              if (arr[j] < arr[i])
//                  s.insert(arr[j]);
//          }
//          cout << s.size() + 1 << " ";
//      }
//  }
int main()
{
    int n = 6;
    int arr[] = {2, 8, 3, 1, 4, 9};
    map<int, int> mp;
    int temp = 1;
    int brr[n];
    for (int i = 0; i < n; i++)
    {
        brr[i] = arr[i];
    }
    sort(brr, brr + n);
    for (int i = 0; i < n; i++)
    {
        if (mp[brr[i]] == 0)
        {
            mp[brr[i]] = temp;
            temp++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << mp[arr[i]] << " ";
    }
}