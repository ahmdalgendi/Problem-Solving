#include <bits/stdc++.h>
using namespace std ;
#define ll long long

int main() {
    ll h , m , health , d , c , n ;

    cin >>h >> m >> health >> d >>c >> n;
   long double  nc = c* .8 ;
    ll cnt = 0;
    if (h<20)
    {
         cnt = 0 ;
        while (h!= 20)
        {
            if(m ==59)
            {
                m=0, h++;
            }
            m++;
            cnt+= d ;
        }
    } else{
        int out = 0;
        while (health>0)
            health-= n, out++;
        cout << std::setprecision(5) << out * nc* 1.0;
        return 0;
    }
    cnt+= health;
   long double a , b ;
    int x=0, y=0 ;
    while (health>0)
        health-= n, x++;
    while (cnt>0)
        cnt-=n , y++;
    a = x * c *1.0;
    b = y*nc *1.0;

    cout << std::setprecision(5) << min(a,b);
    return 0;
}