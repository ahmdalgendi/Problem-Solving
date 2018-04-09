#include <bits/stdc++.h>
using namespace std;
#define ll long long
int ss(pair<int,int> a , pair<int,int> b)
{
    return a.second < b.second ;
}
int n ,  k  , s, t ;
vector<pair<int,int> > v;
vector<int> gas, a ;
int ok (int x )
{
    ll sum = 0 ;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] > x) return 0;
        if (x/2 >= a[i])
            sum+=a[i];
        else{
        int q = x - a[i] ;
        int w = a[i] - q ;
        sum+= (q + 2 * w);
    }
    }
    return sum <= t ;
}
int main() {


    cin >> n >> k >> s >>t;
    int x , y ;
    for (int i = 0; i < n; ++i) {
        scanf("%d%d", &x, &y);
        v.push_back({x,y});
    }
    for (int i = 0; i < k; ++i) {
        scanf("%d" , &x);
        gas.push_back(x);
    }
    sort(gas.begin(), gas.end());
    a.push_back(gas[0]);
    for (int i = 1; i <k ; ++i) {
        a.push_back(gas[i] - gas[i-1]);
    }

    a.push_back(s-gas[k-1]);

    sort(v.begin(), v.end(), ss);
//    for (int i = 0; i < v.size(); ++i) {
//        cout<<v[i].first<<" " << v[i].second<<"\n" ;
//    }
//   puts("");
    int st = 0 , en =n-1 ;
    if (ok(v[n-1].second)==0) return puts("-1");
    while (st < en)
    {
        int mid = (st+en)/2 ;
        if (ok(v[mid].second))
            en = mid ;
        else
            st = mid +1 ;

    }
    vector<pair<int,int> > o ;
    for (int i = st; i <n ; ++i) {
        o.push_back(v[i]);
    }
    sort(o.begin(), o.end());
    cout<<o[0].first;
    return 0;
}