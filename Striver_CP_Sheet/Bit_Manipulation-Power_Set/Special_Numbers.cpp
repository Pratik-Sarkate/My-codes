// https://codeforces.com/problemset/problem/1594/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

ll m = 1e9+7;

ll power(ll a, ll n){

    if(n==0) return 1;

    if(n%2==0) return power((a%m * a%m)%m, n/2);
    else return (a%m * power((a%m * a%m)%m, n/2)%m)%m;
}

void solve(){
    ll n,k;cin>>n>>k;

    ll ans = 0;

    ll pos = 0;
    while(k){
        if(k&1){
            ll p = power(n,pos);
            ans = (ans%m + p%m)%m;
        }
        pos++;
        k>>=1;
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
