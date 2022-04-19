// find last digit of number

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n, sum = 0;
//     cin >> n;
//     sum = n % 10;
//     cout << sum;
// }

// // sum of digit

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int n, sum = 0;
//     cin >> n;
//     while(n!=0){
//         int last_digit = n % 10;
//         sum=sum+last_digit;
//         n=n/10;
//     }
//     cout << sum;
// }


// reverse number
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, rev = 0;
    cin >> n;
    while (n != 0)
    {
        int last_digit = n % 10;
        rev = rev * 10 + last_digit;
        n = n / 10;
    }
    cout << rev;
}
// 12345
//last_digit= 12345%10 = 5
// rev=0*10+5 = 5
// n=12345/10 = 1234