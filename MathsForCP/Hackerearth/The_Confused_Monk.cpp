// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/the-confused-monk/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

ll m = 1e9+7;


ll euclid_gcd(ll a, ll b){

    if(b==0) return a;

    return euclid_gcd(b,a%b);
}


ll power(ll a, ll b){

    if(b==0) return 1;

    if(b%2==0) return power((a*a)%m, b/2);
    else return (a*power((a*a)%m, b/2))%m;
}


void solve(){
    ll n;cin>>n;

    vector<ll> arr(n);
    for(ll i = 0; i<n; i++) cin>>arr[i];

    ll a = 1, b = arr[0];
    
    for(ll i = 0; i<n; i++){
        a = (a*arr[i])%m;
    }

    for(ll i = 1; i<n; i++){
        b = euclid_gcd(b,arr[i]);
    }

    cout<<power(a,b)<<endl;

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