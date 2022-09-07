#include <bits/stdc++.h>

using namespace std;
bool ispalindrome(string s)
{
    int left = 0, right = s.length() - 1;
    while (left < right)
    {
        /* code */
        if (!isalnum(s[left]))
            left++;
        if (!isalnum(s[right]))
            right--;
        else if (tolower(s[left]) != tolower(s[right]))
            return false;
        else
            left++;
        right--;
    }
    return true;
}
int main()
{
    string str = "ABCDCBA";
    bool ans = ispalindrome(str);
    if (ans == true)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
    return 0;
}
