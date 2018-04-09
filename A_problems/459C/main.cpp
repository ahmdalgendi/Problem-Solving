#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , k , d ;
    cin >> n >> k >> d ;
    int  x = int(pow(k,d));
    long long ask=k , is;
    bool f= 0;
    for (int i = 0; i < d; ++i) {
        if(ask > n){
            f=1;
            break;
        }
        ask*=k;
    }
    if(!f)return  puts("-1");
    if (n > x ) return puts("-1");
    x = (n+k-1)/k;
    int out = 0;
    int pos[1002]{0}, cnt = 0;
    vector<int> v[1005];
    for (int i = 0; i < n; ++i) {
        if (i &&  i % x ==0 )
            out++;
        pos[i] = out ;
        v[out].push_back(pos[i]);
    }out++;
    deque<int> q ;
    for (int i = 0; i < out; ++i) {
        q.push_back(i);
    }
    int tmp = q.front();
    q.pop_front();
    q.push_back(tmp);


    int a =1, b = out/2;
    for (int l = 0; l <d ; ++l) {


        for (int i = 0; i < out; ++i) {

            if (v[i].size() - a > 0)
                v[i][v[i].size() - a] = q[i];
        }
        for (int i = 0; i < out; ++i) {
            // cout<<"size " << v[i].size()<<" /n" ;
            for (int j = 0; j < v[i].size(); ++j) {
                cout << v[i][j] << " ";
            }
        }
        puts("");
        a++;
    }
    return 0;
}