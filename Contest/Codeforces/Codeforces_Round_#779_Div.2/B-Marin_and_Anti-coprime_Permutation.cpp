// https://codeforces.com/contest/1658/problem/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

ll mod = 998244353;

ll func(ll n){

    ll ans = 1;
    for(ll i = 1; i<=n; i++){
        ans = (ans * i)%mod;
    }

    return ans%mod;
}

void solve(){
    ll n;cin>>n;
    if(n&1){
        cout<<0<<endl;
        return;
    }

    ll ans = func(n/2ll);

    cout<<(ans*ans)%mod<<endl;


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