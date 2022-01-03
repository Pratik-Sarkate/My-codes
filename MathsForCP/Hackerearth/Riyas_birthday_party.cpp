// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/riyas-birthday-party-1/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;
int m = 1e9+7;

void solve(){

    ll n;cin>>n;
    ll a = 1, b = 6;
    // cout<<a<<" "<<b<<" ";
    // for(int i = 2; i<n; i++){
    //     int c = (b+2)*2 - a;
    //     cout<<c<<" ";
    //     a = b;
    //     b = c;
    // }
    // cout<<endl;

    ll x = 2ll*n;
    // cout<<"x = "<<x<<endl;
    ll ans = (((x%m)*((x-1ll)%m))/2ll)%m;  // nth number of the series: (2*n-1)(2*n-1+1)/2
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