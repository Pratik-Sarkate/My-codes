// https://codeforces.com/contest/1634/problem/A

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll n,k;cin>>n>>k;
    string s;cin>>s;

    bool flg = 1;
    int i = 0, j = s.length()-1;

    while(i<=j){
        if(s[i++]!=s[j--]){
            flg = 0;
            break;
        }
    }
    ll ans;
    
    if(flg){
        cout<<1<<endl;
        return;
    }else{
        if(k==0) cout<<1<<endl;
        else cout<<2<<endl;
    }
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