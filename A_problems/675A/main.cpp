#include <bits/stdc++.h>
using namespace std;

int main() {
    long long  a, b , c ;
    cin >>a>>b>>c;
    if(a==b) return puts("YES");
    if(c==0) return puts("NO");
    if ((b - a) % c == 0 && (b - a) / c >= 0)
        puts("YES");
    else puts("NO");

    return 0;
}