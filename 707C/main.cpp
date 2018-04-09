#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    ll x,y , n ;
    cin>> n;
    n = n*n;
    if(n==1||n==4) return puts("-1");

    if(n%2)
    {
        x = n/2,y=n/2+1;
    } else
       n/=2, x = n/2+1 , y=n/2-1 ;
    cout<<x<<" " <<y<< endl;


    return 0;
}