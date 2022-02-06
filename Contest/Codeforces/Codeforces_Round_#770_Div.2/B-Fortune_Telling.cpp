// https://codeforces.com/contest/1634/problem/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll n,x,y;cin>>n>>x>>y;

    vector<ll> a(n);
    ll sum = x&1;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        sum = (sum + a[i])&1;
    }

    if((sum&1)==(y&1)) cout<<"Alice"<<endl;
    else cout<<"Bob"<<endl;


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