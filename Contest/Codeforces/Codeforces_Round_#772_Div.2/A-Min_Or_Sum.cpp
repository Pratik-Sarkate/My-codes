// https://codeforces.com/contest/1635/problem/A

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    ll ans = 0;
    for(int i = 0; i<n; i++){
        int x;cin>>x;
        int pos = 0;
        while(x){
            if(x&1) ans = ans | (1<<pos);
            pos++;
            x>>=1;
        }
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