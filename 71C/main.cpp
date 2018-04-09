#include <bits/stdc++.h>
#define ll long long

using namespace std;

const int N = 1e6;
bool f[N + 5];
ll n , x , y;
vector<ll> getDivisors(){
    vector<ll> ret;
    for(int i=1; i*i<=n; i++){
        if(n % i == 0){
            ret.push_back(i);
            if(n != i * i)
                ret.push_back(n / i);
        }
    }
    return ret;
}






void seive(){
    f[0] = f[1] = 1;
    for(int i=1; i<=n; i++){
        if(f[i])
            continue;
        for(ll j=(ll)i*i; j<=n; j+=i)
            f[j] = 1;
    }
}

int main()
{
    cin >>n ;
    int arr[N];
    seive();
    vector<ll> v = getDivisors();
    bool hmm=1;
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr+i);
        if(arr[i]==0) hmm=0;
    }
    if(hmm)
        return puts("YES");
    int vis[N]={0};

    for (int i = 0; i <v.size() ; ++i) {
        if((f[v[i]] == 1 && v[i] !=4)|| v[i]==n || v[i]==1||v[i]==2) continue;
        memset(vis,-1, sizeof(vis));
        int div = n/v[i];
        for (int j = 0; j < n; ++j) {
            int w=j;
            if(arr[w]==0) continue;
            while (1)
            {
                if(vis[w]==j) return puts("YES");
                if(arr[w]==0) break;
                vis[w]=j;
                w+= div;
                if(w>=n) w-=n;
            }
        }
    }
    puts("NO");
    return 0;
}