// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/panda-and-chain-reaction/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

int m = 1e6+3;
vector<ll> pre(m+1,1);



void solve(){
    ll n,x;cin>>n>>x;
    if(n>=m) cout<<0<<endl;    // for n>=1e6+3, factorial % m becomes 0
     
    else cout<<(ll)((x%m)*(pre[n]%m))%m<<endl;
}

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // Code

    // precomputed factorial % m

    for(ll i = 2; i<m+1; i++){
        pre[i] = (i*pre[i-1]%m)%m;
    }

    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}