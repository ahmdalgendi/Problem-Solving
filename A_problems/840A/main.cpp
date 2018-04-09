#include <bits/stdc++.h>
using namespace std;
int n;
int main() {
   cin>>n;
    cout<<(n<=2?0:(n&1?n/2:n/2-1));
}