#include <bits/stdc++.h>
using namespace std;


int main() {
    int n , m , out;
    cin >> n >> m ;
    if(n==1)
        return puts("1");
    int x = (n+1)/2 ;
    if(n&1 && m == x)
    {
        cout<< m-1;
        return 0;
    }
    if (m> x)
    {
        cout<< m-1;
    } else
        cout << m+1 ;
    return 0;
}