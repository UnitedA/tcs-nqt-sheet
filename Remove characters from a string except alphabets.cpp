#include <iostream>
using namespace std;
string onlyalphabets(string s)
{
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        int ascii = (int)s[i];
        if (ascii >= 65 && ascii <= 90 || ascii >= 97 && ascii <= 122)
        {
            ans.push_back(s[i]);
        }
    }
    return ans;
}
int main()
{
    string s = "take12% *&u ^$#forward";
    cout << "Resultant string:"
         << "\n";
    cout << onlyalphabets(s);
    return 0;
}