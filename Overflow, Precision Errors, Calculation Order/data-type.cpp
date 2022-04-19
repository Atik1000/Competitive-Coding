// presidence:
// 1.Double
// 2.Float
// 3.Long long Int
// 4.Long Int
// 5.Int
// 6.char
// alaws higher presidence than lower presidence

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     cout <<  7 / 2.0;
// }

// output: 3.5
#include <bits/stdc++.h>
using namespace std;
int main()
{

    cout << "print c ascii value:" << (int)'c' << '\n'; // 99
    
    char a = 'c' + 1;
    cout << "print c ascii value+1 then convert char :" << a << '\n'; // 'd'

    cout << "print c ascii value +1 then print ascii value:" << 'c' + 1; // '100'
    cout << '\n';
}


// output: 100

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     double a = 7 / 2;
//     cout << a;
// }