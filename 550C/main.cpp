#include <bits/stdc++.h>
using namespace std;


int main() {
    string s ;
    cin >> s ;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i]=='0') {
            cout<<"YES\n0";
            return 0;
        }
        if(s[i]=='8'){
            cout<<"YES\n8";
            return 0;
        }
    }
    for (int i = 0; i < s.size(); ++i) {
        for (int j = i+1; j <s.size() ; ++j) {
            int x = s[i]-'0';
            x*=10;
            x+= (s[j]-'0');
            if (x%8==0){
                cout<<"YES\n"<<x<< endl;
                return 0;
            }
            for (int k = j+1; k < s.size(); ++k) {
                x = s[i]-'0';
                x*=100;
                x+= (s[j]-'0')*10;
                x+=(s[k]-'0');
                if (x%8==0){
                    cout<<"YES\n"<<x<< endl;
                    return 0;
                }
            }
        }
    }

puts("NO");
    return 0;
}