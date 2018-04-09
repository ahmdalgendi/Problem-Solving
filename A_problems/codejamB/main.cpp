#include <bits/stdc++.h>
using namespace std ;
#define  ll long long
ll n , k , a[100005], b[100005 ] ;
int ok (int x)
{
    int y = k ;
    for (int i = 0; i < n; ++i) {
            ll z = x * a[i] ;
            if ( z - b[i] < 0  )
                continue;
            if (z-b[i] > y)
                return 0;
            y= y-(z-b[i]) ;
    }
    return 1 ;
}

int main() {


    cin >> n >> k ;
    for (int i = 0; i <n ; ++i) {
        scanf("%I64d" ,&a[i]) ;
    }

    for (int i = 0; i <n ; ++i) {
        scanf("%I64d" ,&b[i]) ;
    }

    ll st = 0, en = 2e9 ;
    while (st<en)
    {
        ll mid = (st+en+1) / 2 ;
        if (ok(mid))
            st =  mid;
        else en = mid-1 ;
    }
    cout << st <<endl;

    return 0;
}