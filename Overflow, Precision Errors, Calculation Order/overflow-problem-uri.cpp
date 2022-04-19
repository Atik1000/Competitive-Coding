/* Given rectangle of length l and b . print area of rectangle.
Constraints:
1 <= l <= 10^9
1 <= b <= 10^9

Input:
2 space separated integers l and b

output:
area of rectangle

Sample Input:
3 4

Sample Output:
12

*/


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,b;
    cin >> l >> b;
    cout << l*1LL*b << '\n'; // overflow error fix
    return 0;
}