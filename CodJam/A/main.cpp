#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;
ll val (string s ){
    ll d , sum =0 , pw = 1, mv=0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] =='S') sum+= pw;
        else pw*=2;
    }

    return sum ;
}

int main() {
    int T ;
    cin >>T ;
    for (int wpw = 1; wpw <= T; ++wpw) {
        ll d , sum =0 , pw = 1, mv=0;
        string s ;

        cin >>d>>s;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] =='S') sum+= pw;
            else pw*=2;
        }

        int cnt = 0;
        bool f = 0 ;
        while (true) {
            if (val(s) <= d )
            {
                f=1;
                break;
            }
            int ss=0;
            for (int i = s.size() - 1; i >= 1; i--) {
                if (s[i]=='S' && s[i-1] == 'C')
                {
                    ss++;
                    cnt++;
                    swap(s[i], s[i-1]);
                    if(val(s)<=d)
                        break;

                }

            }
            if (ss==0) {
                f=0;
                break;
            }
        }

        if (f) printf("Case #%d: %d\n" , wpw , cnt);
        else printf("Case #%d: IMPOSSIBLE\n" , wpw );
    }
    

    return 0;
}