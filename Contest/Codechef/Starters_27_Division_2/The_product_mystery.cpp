// https://www.codechef.com/START27B/problems/PRODUCT

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

ll gcd(ll a, ll b){
    if(b==0) return a;

    return gcd(b,a%b);
}

void solve(){
    ll b,c;cin>>b>>c;

    cout<<c/gcd(b,c)<<endl;
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