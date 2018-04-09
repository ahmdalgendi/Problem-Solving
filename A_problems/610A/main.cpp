#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , cnt =0;
    cin >> n;
    if(n&1)
        return puts("0");

    if(n%4)
        cout<<n/4;
    else cout<<n/4-1;
    return 0;
}