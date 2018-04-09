#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n , a , b , x , y ,c;
    cin>>a>>b>>c;

    b= b/2 , c= c/4;
    x = min(a, min(b,c));
     y = x+ 2*x+4*x ;
    cout<<y<<endl;

    return 0;
}