#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int,char,long int,long long int,float,double;
    // -10^9 int 10^9
    // -10^12 long int 10^12
    // -10^18 long long int 10^18

    int a = 100000;
    int b = 100000;
    cout <<"overflow:"<< a * b << '\n'; // overflow


      // fix overflow by using long long int

    long long int a1 = 100000;
    long long int b1 = 100000;
    cout <<"fix over flow:" <<a1 * b1 << '\n'; // no overflow




    // another way to fix overflow    
    int a2 = 100000;
    int b2 = 100000;
    cout <<"fix overflow another way :"<< a2 *1LL *b2 << '\n'; // no overflow

    int mx = INT_MAX;
    cout << "range int type:"<<mx << '\n';
    cout << "overflow when range+1:"<<mx + 1 << '\n'; // overflow

    int c = 100000;
    long int d = 100000;
    long int e = c * d;
    cout << "another way fix overflow;" << e << '\n';
}