#include <bits/stdc++.h>
using namespace std;
#define  ll long long

int main()
{
    ll a , b , cnt=0 , mn , mx, z=1, out;
    cin >> a>>b;
    mn = a ;
    mx = b ;
    int cnt1 =0 , cnt2 = 0;
    while (a) cnt1++, a/=2;
    while (b)cnt2++, b/=2;
    cnt1--;
    cnt2--;
    if (cnt1 != cnt2)
    {

        ll aa = (z<<cnt2) ,bb=((z<<cnt2)-1);
        aa^= bb ;
        cout<< aa ;
        return 0 ;
    }
    a= mn, b = mx ;
    cnt2++;
    for (int i = 0; i < cnt2; ++i) {
        ll x , y ;
        x = (z<<i) & a ;
        y = (z<<i) & b ;
        if (x==y)
        {
            if (y==0)
            {
                if (((z<<i) | a )< mx)
                {
                    a = a |(z<<i) ;
                }

            } else {
                ll bit = ~(z<<i);
                if( (bit & b) > mn)
                     b = bit & b ;
            }
        }
    }
     out = a^b;
    cout << out ;

    return 0;
}