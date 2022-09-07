#include <bits/stdc++.h>
using namespace std;
int countno(string s)
{
    int count_v = 0, count_c = 0, count_s = 0;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count_v++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            count_c++;
        }
        if (s[i] == ' ')
        {
            count_s++;
        }
    }
    cout << "the vowels are:" << count_v << endl;
    cout << "the consonants are:" << count_c << endl;
    cout << "the spaces are: " << count_s << endl;
}
int main()
{
    string str = "Take u forward is Awesome";
    countno(str);
    return 0;
}