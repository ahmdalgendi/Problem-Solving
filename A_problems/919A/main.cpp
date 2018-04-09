#include <bits/stdc++.h>
using namespace std;
int main() {
    int n , m ;
    double  a , b , mn = 100000000000;
    cin >> n >> m ;
    for (int i = 0; i < n; ++i) {
        cin>> a>>b;
        mn  = min(mn , a/b);
    }
    mn = mn  * m ;
    printf("%.9lf", mn);


    return 0;
}