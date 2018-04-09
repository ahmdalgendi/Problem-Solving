#include <bits/stdc++.h>
using namespace  std ;
#define  ll long long
#define MOD 1000000007
int main() {
    int T ;
    cin >> T ;
    while (T--)
    {
        ll n , arr[1000005];
        ll a =0 , b = 1 , c = 1;
        scanf("%I64d", &n);
        for (int i = 0; i < n; ++i) {
            scanf("%I64d", arr+i);
            b = (b* (arr[i]+1)) % MOD ;
        }
        b--;

        printf("%I64d\n" , b);
    }
    return 0;
}