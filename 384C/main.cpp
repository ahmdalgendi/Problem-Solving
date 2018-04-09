#include <bits/stdc++.h>
using namespace std;
int n ,arr[200005] ;

int main() {

    cin >>n ;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", arr+i);
    }
    int left[200005]={0} , right[200005]={0};
    for (int i = 1; i <=n ; ++i) {
        left[i] = left[i-1] + (arr[i]==0);
        right[i] = right[i-1] + (arr[i]) ;
    }
    long long sum = 0 ;
    for (int i = 1; i < n+1; ++i) {
        if(left[i] != left[i-1])
            sum+= right[i];
    }
    cout<<sum<<endl;

    return 0;
}