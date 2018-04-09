#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n=1, cum [100]={0}, x, arr[100];
    cin>>x;
    int cnt=2;
    cum[1] = 1;
    arr[1]=1;
    while (n<=100000000000000000)
    {
        n*=3;
        cum[cnt]=n+cum[cnt-1];
        arr[cnt]= n;
        cnt++;
    }
    int mx = -1 ;
    for (int i = 1; i < 36; ++i) {
        for (int j = i; j < 36; ++j) {
            int mid=(i+j)/2;
            if(cum[j] - cum[i-1] >= x && cum[j] - cum[i-1] - (cum[mid] - cum[mid-1] ) < x  )
                mx=max(mx , j-i+1);
        }

    }
    cout<<mx ;
    return 0;
}
