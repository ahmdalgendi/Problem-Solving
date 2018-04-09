#include <bits/stdc++.h>
using namespace std ;
int main() {

    int n , m , a[100005],x,y;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        scanf("%d", a+i);
    }
    cin>>m;
   long long l = 0, curmx=-1 ;
    for (int i = 0; i < m; ++i) {
        scanf("%d%d", &x, &y);
        if(x-1 <  l)
        {
            printf("%I64d \n", curmx);
            curmx+=y;
        } else{
            if(a[x-1] > curmx)
            {
                printf("%d\n", a[x-1]);
                curmx  = a[x-1] + y;
                l = x-1 ;
            } else{
                printf("%I64d \n", curmx);
                curmx+= y;
                l = x-1;
            }
        }
    }

    return 0;
}