#include <bits/stdc++.h>
using namespace  std ;
int main() {
    int t , s , x ;
    cin >> t>>s >>x ;
    x-=t ;
    if (x<0) return puts("NO");

    int y = x -1; ;

    if (x>=s &&(y%s ==0 ||  (x-2) % s ==0|| x%s==0))
        puts ("YES");
    else puts("No");
    return 0;
}