#include <bits/stdc++.h>
using namespace std;
int n , arr[500005];
long long cnt[1000010];


long long a , b;
int main() {

    cin>>n;
    for (int i = 0; i <n; ++i) {
        scanf("%d", arr+i);
        a+= arr[i];
    }

    if(a%3) return puts("0");
    a/=3;
    for (int i =n-1; i >=0 ; i--)
    {
        b+= arr[i];
        if (a==b) cnt[i]=1;
    }
    for (int i =n-2; i >=0 ; i--)
    {
        cnt[i] += cnt[i+1];
    }
    long long out =0;
    b=0;
    for (int i = 0; i < n-2; ++i) {
        b+=arr[i];
        if (a==b) out+= cnt[i+2];
    }
    cout << out ;
    return 0;
}