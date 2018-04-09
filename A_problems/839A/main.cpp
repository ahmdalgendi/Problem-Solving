#include <bits/stdc++.h>
using namespace std;
int main() {
    int n , k , sum =0 , arr[10005], x=-1, l =0;
    cin >>n>>k;
    bool f =1;
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr+i);
        if(f)
        {
            if(arr[i]>=8)
            {
                l+=arr[i] - 8 ;
                sum+=8;
            } else{
                sum+=min(l+arr[i],8);
                l= max(l-(8-arr[i]), 0);
            }

        }
        if(sum>= k&& f)
        {
            f=0, x = i+1;
        }
    }
    cout<<x<<endl;

    return 0;
}