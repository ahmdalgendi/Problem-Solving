#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main() {
    int n , k,t;
    cin >>n>>k>>t;
    int w= (n*k*t)/100;
    int q = w/k ;
    for (int i = 0; i < q; ++i) {
        cout<<k<<" ";
    }

    if(q<n){cout<< w-(w/k) * k <<" " ;
    for (int i = 0; i < n-(q+1); ++i) {
        cout<<"0 ";
    }
    }
    return 0;
}