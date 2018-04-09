#include <bits/stdc++.h>
using namespace std ;
int main() {
    int T ;
    freopen("bb.in","r",  stdin);
    freopen("file.txt", "w", stdout );
    cin >> T ;
    for (int i = 1; i <= T ; ++i) {
        string s ;
        int k ;
        cin >> s >> k ;
        int cnt = 0 ;
        for (int j = 0; j <= s.size()-k; ++j) {
            if (s[j] == '-')
            {
                for (int l = j; l <j+ k; ++l) {
                    if (s[l] == '+') s[l] = '-';
                    else s[l] = '+' ;
                }
                cnt++;
            }
        }
        bool f = 1 ;
        for (int m = 0; m < s.size(); ++m) {
            if (s[m] == '-') {
                f=0;
                break;
            }
        }
        if (f) printf("Case #%d: %d\n", i , cnt);
        else printf("Case #%d: IMPOSSIBLE\n", i);
    }
    return 0;
}