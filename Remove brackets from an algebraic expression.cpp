#include <iostream>
using namespace std;
string removebrackets(string s)
{
    string ans;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '(' && s[i] != ')')
        {
            ans.push_back(s[i]);
        }
    }
    return ans;
}
int main()
{
    string s = "a+((b-c)+d)";
    cout << "original::::" << s << endl;
    cout << "after removing ::::" << removebrackets(s) << endl;
    return 0;
}