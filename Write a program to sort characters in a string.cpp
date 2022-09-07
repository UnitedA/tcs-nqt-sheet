#include <bits/stdc++.h>
using namespace std;
string utkarh(string s, int length)
{
    sort(s.begin(), s.end());
    return s;
}
int main()
{
    string s = "zxcbg";
    int length = s.length();
    cout << "String after sorting:"
         << "\n";
    cout << utkarh(s, length) << "\n";
    return 0;
}