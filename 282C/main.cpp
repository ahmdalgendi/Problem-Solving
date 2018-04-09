#include <bits/stdc++.h>
using namespace std ;

int main() {
    string a  , b ;
    bool f=1 ;
    cin >> a >> b ;
    if (a==b) return puts("YES");
    if(a.size()==1) return puts("NO");
    if(a.size()!=b.size())
        return puts("NO");
    int x=0, y=0;
    for (int i = 0; i < a.size(); ++i) {
        if(a[i]=='1') x=1;
        if(b[i]== '1') y=1;
    }
    if(x&&y) return puts("YES");
    puts("NO");

    return 0;
}