#include <iostream>
using namespace std;
// int main()
// {
//     string s = "ARYAN";
//     reverse(s.begin(), s.end());
//     cout << "the reversed string is" << s;
// }
void swap(string &s, int i, int j)
{
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}
void reverse(string &a)
{
    int i = 0;
    int j = a.length() - 1;
    while (i < j)
    {
        swap(a, i, j);
        i++;
        j--;
    }
}
int main()
{
    string a = "aryan";
    reverse(a);
    cout << "the reversed string is:" << a;
    return 0;
}