// https://codeforces.com/contest/670/problem/D1    
// https://codeforces.com/contest/670/problem/D2

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


bool is_possible(vector<ll> &a, vector<ll> &b, ll n, ll k, ll mid){     // function to check if enough ingredients to make "mid" no. of cookies

    double sum = 0;
    for(ll i = 0; i<n; i++){

        sum+=max(0ll,mid*a[i] - b[i]);
        if(sum>k) return 0;
    }

    return 1;
}

void solve(){
    ll n,k;cin>>n>>k;
    vector<ll> a(n);
    for(ll i = 0; i<n; i++){
        cin>>a[i];
    }

    vector<ll> b(n);
    ll mx = 0;
    for(int i = 0; i<n; i++){
        cin>>b[i];
        mx = max(mx,b[i]);
    }


    // search space no. of cookies

    ll lo = 0, hi = k+mx;

    ll mid, ans;

    while(lo<=hi){

        mid = lo + (hi-lo)/2ll;

        if(is_possible(a,b,n,k,mid)){
            ans = mid;
            lo = mid + 1;
        }else{
            hi = mid - 1;
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
    // cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}