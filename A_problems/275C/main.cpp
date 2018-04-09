#include <bits/stdc++.h>
using namespace std;
int main() {

    int n , k , cnt=0, t;
    set<long long> s , v;

    cin>>n >>k;
    map<int,int> mp;
    for (int i = 0; i < n; ++i) {
        scanf("%d", &t);
        s.insert(t);
        v.insert(t);
    }
    for (auto i : s) {
        if (i%k)
        {
            if(v.find(i*k) !=v.end())
            {
                    cnt+=1;

            } else cnt+= 1 ;
        } else
        {
            if(v.find(i*k ) != v.end() && v.find(i/k) !=v.end() && (i != i/k && i != i*k ))
            {
                v.erase(i);

            } else if (v.find(i*k ) != v.end())
            {
                cnt+=1;
            } else if (v.find(i/k) !=v.end())
            {

            } else cnt+= 1;
        }
    }
    cout<<cnt<<endl;
    return 0;
}