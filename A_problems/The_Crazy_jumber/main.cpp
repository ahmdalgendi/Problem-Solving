#include <bits/stdc++.h>
using namespace  std ;
#define  ll long long
#define MOD 1000000007
const int N =1e6 ;
int n , last[N] , nxt[N], arr[N];
int dp[N];
int solve(int i =0)
{
    if (i==n)
        return 0;
    int &ret = dp[i];
    if (ret!=-1)
        return dp[i];
     ret = solve(i+1)+1 ;
    if (nxt[i]!=-1)
        ret = min(ret, solve(nxt[i]) +1);
    return ret;
}
int main(){
   int T ;
    cin >> T ;
    while (T--)
    {
       cin >> n ;
        fill(dp, dp+n, -1);
        memset(last, -1, sizeof(last));
        fill(nxt, nxt+n, -1) ;
        for (int i = 0; i < n; ++i) {
            scanf("%d", arr+i);
        }
        for (int i = 0; i <n ; ++i) {
            if (last[arr[i]] == -1)
                last[arr[i]] = i ;
            else nxt[last[arr[i]]] = i, last[arr[i]] = i ;

        }

        //for (int i = 0; i < n; ++i) cout<<nxt[i]<<" ";

        printf("%d\n",solve()-1 );

    }

}