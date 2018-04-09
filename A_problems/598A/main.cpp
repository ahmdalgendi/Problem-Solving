#include <bits/stdc++.h>
using namespace std;
int n;
#define ll long long
int main() {
  vector< ll>  p ;
    p.push_back(1);
    while (p[p.size()-1] <= 1000000000)
    {
        ll x = p[p.size()-1] * 2 ;
        p.push_back(x);
    }
    vector<ll>cum(40);
    cum[0]=1;
    for (int i = 1; i <p.size() ; ++i) {
        cum[i] = cum[i-1] + p[i];
    }
    int  t;
    cin>>t;
    ll x ;
    while(t--)
    {
        cin>>x ;
        ll y , z ;
        for (int i = 0; i < p.size(); ++i) {
            if(p[i] > x)
            {
                z=i-1;
                break;
            }
            if(p[i]== x)
            {
                z=i;
                break;
            }
        }
        y = (x*(x+1))/2 - cum[z]*2;
    cout<<y<<endl;
    }
  }