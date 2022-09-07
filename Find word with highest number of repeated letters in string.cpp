#include <bits/stdc++.h>
using namespace std;
void upperlower(string str, int n)
{
    for (int i = 0; i < n; i++)
    {
        int ascii = (int)str[i];

        if (ascii >= 65 && ascii <= 90)
        {
            str[i] = tolower(str[i]);
        }
        if (ascii >= 97 && ascii <= 122)
        {
            str[i] = toupper(str[i]);
        }
    }
    cout << "the string is" << str << "\n";
}
int main()
{
    string str = "take u forward IS Awesome";
    int n = str.length();
    upperlower(str, n);
    return 0;
}