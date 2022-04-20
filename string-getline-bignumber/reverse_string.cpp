// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     string str;
//     cin >> str;
//     string str_rev;
//     for (int i=str.length()-1; i>=0; i--){
//         // str_rev += str[i];
//         str_rev.push_back(str[i]); // fix time complexity
//     }
//     cout << str_rev << endl;
// }


// String palindrome
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    string str_rev;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        // str_rev += str[i];
        str_rev.push_back(str[i]); // fix time complexity
    }
    // cout << str_rev << endl;
    if (str == str_rev)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}