#include <bits/stdc++.h>
using namespace std ;
int main() {
    int n , arr[105], mn=1000, mx = -1 , a=0, b = 0 ;
    cin >> n ;
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
        if(arr[i] > mx ) mx = arr[i], a = i+1;
        if (arr[i] < mn ) mn = arr[i] , b = i+1 ;
    }
    mx = -1 ;
    mx = max(abs(1-a) ,abs(n-a));
    mn =max(abs(1-b) ,abs(n-b));
    cout << max(mn , mx) << endl;
    return 0;
}