// https://codeforces.com/contest/1626/problem/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    string s;cin>>s;
    bool flg = 0;
    ll len = s.length();
    for(int i = len-1; i>0; i--){
        int sum = s[i]-'0' + s[i-1]-'0';
        if(sum>9){
            s[i-1] = sum/10 + '0';
            s[i] = sum%10 + '0';
            flg = 1;
            cout<<s<<endl;
            break;
        }

    }

    string z = "";
    if(flg==1) return;

    z = char(s[0] + s[1] - '0') + s.substr(2);
    // z+=s[0]-'0'+s[1];

    /*for(int i = 2; i<s.length(); i++){
        z = z + s[i];
    }*/

    cout<<z<<endl;

}

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // Code
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}