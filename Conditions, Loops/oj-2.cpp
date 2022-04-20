
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

/* You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input:The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

Output:For each test case, calculate the sum of digits of N, and display it in a new line.

*/

#include <bits/stdc++.h>
using namespace std;
   main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        while (n > 0)
        {
            sum += n % 10;
            n /= 10;
        }
        cout << sum << endl;
    }
}
