// https://codeforces.com/problemset/problem/912/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll n,k;cin>>n>>k;

    ll ans = n, temp = n;

    ll pos = 0;
    while(temp){
        pos++;
        temp>>=1;
    }
    ll z = pos;
    if(k>1) cout<<(1ll<<(z)) - 1 <<endl;
    else cout<<n<<endl;

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
