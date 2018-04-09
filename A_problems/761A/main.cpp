#include <bits/stdc++.h>
using namespace std;
int main() {
    int a , b;
    cin>>a>>b;
    if(abs(a-b) <=1&&(a||b))
        puts("YES");
    else puts("NO");

    return 0;
}