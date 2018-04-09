#include<bits/stdc++.h>
using namespace std;
typedef  long long int ll;



int main() {
    int T ;
    cin >>T ;
    for (int wpw = 1; wpw <= T; ++wpw) {
        int n , t, out;
        vector<int>  a , b,c, d;
        bool f =  0 ;
        scanf("%d", &n);
        for (int i = 0; i < n; ++i) {
            scanf("%d", &t);
            if (i&1)
            b.push_back(t);
            else
                a.push_back(t);
            c.push_back(t);

        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(), c.end());
        int cnt = 0;
        for (int i = 0; i < a.size(); ++i) {
            d.push_back(a[i]);
            if (i < b.size())
                d.push_back(b[i]);
        }

        if (d==c)
             f=0;
        else{
            for (int i = 0; i < n-1; ++i) {
                if (d[i] >d[i+1])
                {
                    out = i ;
                    f=1;
                    break;
                }
            }
        }
        if (f)

            printf("Case #%d: %d\n", wpw, out);
        else
            printf("Case #%d: OK\n", wpw);
    }


    return 0;
}