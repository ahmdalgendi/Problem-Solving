#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n , c , x , y ;

bool ok(ll t) {
    ll left = max(1LL, y - t);
    ll right = min(n, y + t);
    ll cnt = 0;
    for (ll i = left; i <= right; i++) {
        ll tmp = t - abs(y - i);
        ll up = max(1LL, x - tmp);
        ll down = min(n, x + tmp);
        cnt += down - up + 1;
        if (cnt >= c) return true;
    }
    return false;
}
int main() {
    cin >> n >> x>>y>>c ;
    ll st = 0 , en = n*n ;
    if (c == 1) return puts("0");
    while (st < en)
    {
        ll mid = (st+en) /2 ;
        if (ok(mid))
            en = mid;
        else st = mid+ 1;
    }
    cout << st;
    return 0;
}