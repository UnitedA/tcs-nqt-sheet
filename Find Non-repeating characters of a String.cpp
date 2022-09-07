#include <iostream>
using namespace std;
class solution
{
public:
    void nonrepeatingchar(string &st, int freq[100])
    {
        int i, j;
        int l = st.length();
        for (int i = 0; i < l; i++)
        {
            if (st[i] == ' ')
                continue;
            else
                freq[st[i] - 'a']++;
        }
        for (int i = 0; i < l; i++)
        {
            if (freq[st[i] - 'a'] == 1 && st[i] != ' ')
                cout << st[i] << " ";
        }
    }
};
int main()
{
    string st = "take u forward";
    int freq[100] = {0};
    cout << "the non repeating string is:";
    solution s;
    s.nonrepeatingchar(st, freq);
    return 0;
}