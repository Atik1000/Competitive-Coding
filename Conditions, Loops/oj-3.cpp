

// reverse number
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int rev = 0;
        while (n > 0)
        {
            rev = rev * 10 + n % 10;
            n /= 10;
        }
        cout << rev << endl;
    }

}
// 12345
// last_digit= 12345%10 = 5
// rev=0*10+5 = 5
// n=12345/10 = 1234