// https://www.codechef.com/START29B/problems/DCP

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;
    

ll mod = 1e9+7;

void solve(){
    ll n,m;cin>>n>>m;
    vector<int> a(n+1);
    a[0] = 0;
    for(int i = 1; i<=n; i++){
        cin>>a[i];
    }

    for(int i = 1; i<=m; i++){
        ll ele, part;cin>>ele>>part;

        for(int j = 1; j<=part; j++){
            ll amount,chem; cin>>amount>>chem;

            a[chem] = (a[chem]%mod + (amount*a[ele])%mod)%mod;

        }
        a[ele] = 0;
    }

    ll sum = 0;

    for(int i = 1; i<=n; i++){
        cout<<a[i]<<endl;
    }
    // cout<<endl;

    // cout<<sum<<endl;
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
    // cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}