#include <iostream>
#include <algorithm>
using namespace std;
bool anagrams(string st1, string st2)
{
    if (st1.length() != st2.length())
        return false;
    int freq[26] = {0};
    for (int i = 0; i < st1.length(); i++)
    {
        freq[st1[i] - 'A']++;
    }
    for (int i = 0; i < st2.length(); i++)
    {
        freq[st2[i] - 'A']--;
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
            return false;
    }
    return true;
}
int main()
{
    string st1 = "INTEGER";
    string st2 = "TEGERNI";
    if (anagrams(st1, st2))
        cout << "true" << endl;
    else
        cout << "false" << endl;
    return 0;
}
