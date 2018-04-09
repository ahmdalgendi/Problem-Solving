#include <bits/stdc++.h>

using namespace std;
int a[4][4];
int check(int i)
{
    int b1 = a[0][0] - i , b2 = a[0][1] - i,b3= a[0][2] - i;
    int a2 = a[1][0]-b1 ,  a3 = a[2][0]-b1 ;
    if(a2+b2==a[1][1]&& a2 + b3 == a[1][2] && a3+b2 == a[2][1] && a3+b3 == a[2][2])
    {
        return 1 ;
    }
    return 0 ;
}
int main()
{

    for(int i = 0 ; i< 3; i++)
        for(int j = 0 ; j < 3;j++)
        cin>>a[i][j];

            if(check(0)) {
                cout<<"Yes"<< endl;
                return 0;
            }

    puts("No");
    return 0;
}