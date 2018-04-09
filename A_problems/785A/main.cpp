#include <bits/stdc++.h>
using namespace std;
int main() {
    int n , k , a=0, b=0, t;
    cin>>n>>k;
    vector<int > x, y ;
    for (int i = 0; i < n; ++i) {
        cin>>t;
        x.push_back(t);
    }
    y=x;
    for (int i = 0; i < n-1; ++i) {
        if(x[i]+x[i+1] < k)
        {
            a+= (k-(x[i]+x[i+1]));
            x[i+1]+= (k-(x[i]+x[i+1])) ;

        }
    }
    for (int i = n-1 ; i >0 ; i--)
    {
        if (y[i]+y[i-1] < k )
        {
            b+= (k-(y[i]+y[i-1]));
            y[i-1] += (k-(y[i]+y[i-1]));

        }
    }
    if(a<b)
    {
        cout<<a<<endl;
        for (int i = 0; i < n; ++i) {
            cout<<x[i]<<" ";
        }
    } else{
        cout<<b<<endl;
        for (int i = 0; i < n; ++i) {
            cout<<y[i]<<" ";
        }
    }
    puts("");

        return 0;
}