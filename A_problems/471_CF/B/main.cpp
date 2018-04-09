#include <bits/stdc++.h>

using namespace std ;

int main()
{

    string s ;
    int t;
    cin>>t;
    while (t--)
    {
        cin>>s ;
        int x = s.size()/2;
        for (int i = 0; i <x; ++i) {
            if(i%2 == 0)
                cout<<s[i];
        }
        puts("");


    }
}