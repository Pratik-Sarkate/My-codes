// https://codeforces.com/contest/1637/problem/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    
    int n;cin>>n;
    vector<ll> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    ll ans = 0;

    for(ll i = 0; i<n; i++){
        ll temp = 0;
        for(ll j = i; j<n; j++){
            if(!a[j]) temp++;
            ans+=(j-i+1+temp);
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