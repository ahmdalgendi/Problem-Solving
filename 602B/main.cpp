#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    int n , arr[100005], f[100005]={0};
    cin>>n;
    set<int> s ;
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr+i);


    }
    int mx  = 2 , num =0 , l =0 , r = 1, cur=2 ;
    s.insert(arr[0]);
    s.insert(arr[1]);
    f[arr[1]]++;
    f[arr[0]]++;
    for (int i = 2; i < n; ++i) {
        if(s.size() < 2 || s.find(arr[i]) != s.end() )
        {
            f[arr[i]]++ ;
            r++;
            s.insert(arr[i]);
        }
        if (s.find(arr[i]) == s.end() && s.size() ==2)
        {

            while ((s.find(arr[i]) == s.end() && s.size() ==2))
            {
                if(f[arr[l]])
                    f[arr[l]]-- ;
                if(f[arr[l]]==0)
                    s.erase(arr[l]);
                mx = max(mx , r-l+1) ;
                l++;

            }

            f[arr[i]]++ ,r++;
            s.insert(arr[i]);
        }
    }
    mx = max(mx , r-l+1);
    cout<<mx;


    return 0;
}