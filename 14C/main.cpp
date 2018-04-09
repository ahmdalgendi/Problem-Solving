#include <bits/stdc++.h>
using namespace std;



int main() {
    set<pair<int,int>  > s;
    set<pair<pair<int, int> , pair<int,int> > > v ;
    int x , y , x_,y_;
    int q=0, b = 0;

    for (int i = 0; i < 4; ++i) {
        cin >> x>>y >>x_>>y_;
        vector<int>sm;
        s.insert({x,y});
        s.insert({x_,y_});

        if(x-x_==0 && y-y_) q++;
        if (y-y_==0 && x-x_)b++;
        pair<int,int> l = {x,y}, m ={x_,y_};
        v.insert({min(l,m) ,max(l,m)});

    }
    if (s.size()!=4 || v.size()!=4 ) return puts("NO");

    if(b==2 && q==2) return puts("YES");
    puts("NO");
    return 0;
}