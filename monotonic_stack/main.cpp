#include <bits/stdc++.h>
using namespace std ;
const int N = 1e5 +7 ;
int n , m ;

char arr[505][505];
pair<int,int> vis[505][505];
int dp[505][505];
int id = 0;
int x = 0;
int solve(int i  , int j)
{
    if(i<0 ||i==n || j <0 || j==m)
        return 1;


    if (vis[i][j].first == id &&  vis[i][j].second > x+6) return 0 ;
    vis[i][j].first = id;
    vis[i][j].second++;
    int &ret = dp[i][j] ;
    if (ret != -1) return ret;
    if (arr[i][j] == 'D')
        ret = solve(i+1, j);
    else if (arr[i][j] == 'U')
        ret = solve(i-1, j) ;
    else if (arr[i][j] == 'R')
        ret = solve(i, j+1) ;

    else if (arr[i][j] == 'L')
        ret = solve(i, j-1) ;

    return ret ;
}
int main() {
    memset(dp , -1 , sizeof(dp));
     memset(vis,-1, sizeof(vis));

    cin >>n >> m ;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >>arr[i][j] ;
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            id  +=1 ;
            x++;
            cnt+= solve(i,j);

        }
    }
    cout <<cnt;

    return 0;
}