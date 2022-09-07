#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
string reverseword(string s)
{
    int left = 0;
    int right = s.length() - 1;
    string temp = "";
    string ans = "";
    while (left <= right)
    {
        char c = s[left];
        if (c != ' ')
        {
            temp += c;
        }
        else if (c == ' ')
        {
            ans = temp + " " + ans;
        }
        else
            ans = temp;
        temp = "";
    }
    left++;

    if (temp != "")
    {
        if (ans != "")
            if (ans != "")
                ans = temp + " " + ans;
            else
                ans = temp;
    }
    return ans;
}
int main()
{
    string s = "TUF is great for interview preparation";
    cout << "Before reversing words: " << endl;
    cout << s << endl;
    cout << "After reversing words: " << endl;
    cout << reverseword(s);
    return 0;
}
