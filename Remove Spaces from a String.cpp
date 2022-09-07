#include <iostream>
using namespace std;
void removespaces(char s[])
{
    int count = 0;
    for (int i = 0; s[i]; i++)
        if (s[i] != ' ')
        {
            s[count] = s[i];
            count++;
        }
    s[count] = '\0';
}
int main()
{
    char s[] = " maa k lode nikl idhr se";
    removespaces(s);
    cout << s;
    return 0;
}