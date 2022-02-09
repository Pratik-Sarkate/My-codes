// https://www.codechef.com/START25B/problems/TOWERTOP

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll x,m;cin>>x>>m;

    ll a = 1;
    ll cnt = 1;
    while(a<x){
        cnt++;
        a*=2ll;
    }

    if(cnt>m){
        cout<<0<<endl;
        return;
    }

    if(cnt==m){
        cout<<1<<endl;
        return;
    }

    cout<<m-cnt+1<<endl;
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