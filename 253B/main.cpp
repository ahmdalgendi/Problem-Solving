#include <bits/stdc++.h>
using namespace std;

int  n , arr[100005];
priority_queue<int> q;
int bs(int i)
{
    int st  =0 , en = i;
    int mn=100005 , a=1000005;

        if (arr[0]*2 >= arr[i])
            mn = n-(i+1) ;
        else {
            while (st < en) {
                int mid = (st + en) / 2;
                if (arr[mid] * 2 >= arr[i]) {
                    en = mid;
                } else
                    st = mid + 1;
            }
            mn = n-(i-st+1);
        }

     //1 6 9 13 15 16 18 24 39 47


        if (arr[n-1] <= arr[i]*2)
            a =i;
        else{
            st =i , en =n-1;
            while (st<en){
                int mid = (st+en+1)/2;
                if(arr[mid] <= arr[i]*2)
                    st=mid;
                else
                    en = mid-1 ;
            }

            a =  n-(st-i+1) ;
        }



    return min(a,mn);
}

int main() {

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >>n;
    for (int i = 0; i < n; ++i) {
        scanf("%d", arr+i);
    }
    sort(arr, arr+n);

    int mn = 10000056;

    if (arr[n-1]<= arr[0]*2) return puts("0");
    for (int i = 0; i < n; ++i) {
        mn = min(mn , bs(i));
    }
    cout << mn<< endl;


    return 0;
}