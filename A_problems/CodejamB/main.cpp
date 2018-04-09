#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    long long sum=1,sum1=0,m=1000000007;
    vector<long long>v;
    bool t=1;
    cin>>n;
    for(int i=2; i<=n;i++)
    {
        for(int j=i-1;j>1;j--)
        {
            if(i%j==0 && i!=j)
               {t=false;
                 break;}
        }
        if(t==false) {t=true; continue; }
        else         {v.push_back(i);}
        t=true;
    }

    for(int i=0 ; i<v.size() ; i++)
    {
    long long x = v[i] ;
        while(n/x>0)
        {
            sum1+=n/x;
            x*=v[i];
        }
        v[i]=sum1;

        sum1=0;
    }

    for(int i=0;i<v.size();i++)
        {
        sum=(sum*(v[i]+1))%m;

       }

    cout <<sum << endl;
    return 0;
}
