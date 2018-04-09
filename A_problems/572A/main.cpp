#include <bits/stdc++.h>
using namespace std;

int main() {
   int na , nb  , k , m , a[100005],b[100005];
    cin>>na>>nb>>k>>m;
    for (int i = 0; i < na; ++i) {
        scanf("%d", a+i);
    }
    for (int i = 0; i < nb; ++i) {
        scanf("%d", b+i);
    }
    if(a[k-1] < b[nb-m]) puts("YES");
    else puts("NO");

    return 0;
}