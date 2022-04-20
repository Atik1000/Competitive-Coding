#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // fix bug for input system
    while (t--)
    {
        string str;
        getline(cin, str);
        cout << str << endl;
    }
}