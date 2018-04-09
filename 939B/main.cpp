
#include <bits/stdc++.h>
using namespace std ;
int main() {
    long long x ,y , n ;
    long long arr[100005];
    cin >>x>>n;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    if(x==0)
        return puts("1 0");
    long long mx  = 1000000000000000007, out=1 , cnt=0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > x) continue;
        y = (x% arr[i]);
        if (y < mx)
        {
            mx = y ;
            out = i+1 ;
            cnt = x/(long long)arr[i];
        }
    }
    cout<< out << " " << cnt<< endl;

    return 0;
}