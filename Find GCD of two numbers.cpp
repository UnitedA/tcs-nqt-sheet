#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return gcd(b, a % b);
}
int main()
{
    int a = 2;
    int b = 4;
    cout << "the gcd of a and b are:" << gcd(a, b);
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
// 	int num1 = 4, num2 = 8;
// 	int ans;
// 	for (int i = 1; i <= min(num1, num2); i++) {
// 		if (num1 % i == 0 && num2 % i == 0) {
// 			ans = i;
// 		}
// 	}
// 	cout << "The GCD of the two numbers is "<<ans;
// }