// https://codeforces.com/contest/1633/problem/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    string s;cin>>s;

    int zero = 0, one = 0;
    int ans = 0;
    for(int i = 0; i<s.length(); i++){
        if(s[i]=='1'){
            one++;
        }else{
            zero++;
        }

        ans = max(ans,min(one,zero));
    }
    zero = 0, one = 0;

    for(int i = s.length()-1; i>=0; i--){
        if(s[i]=='1'){
            one++;
        }else{
            zero++;
        }

        ans = max(ans,min(one,zero));
    }

    // cout<<one<<" "<<zero<<endl; 
    if(one==zero){
        if(s.length()==2) cout<<0<<endl;
        else cout<<one-1<<endl;
        return;
    }
    cout<<ans<<endl;
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