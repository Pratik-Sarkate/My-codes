// https://codeforces.com/problemset/problem/1613/C

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll n,h;cin>>n>>h;
    vector<ll> a(n);
    for(ll i = 0; i<n; i++){
        cin>>a[i];
    }

    // search space is no. of seconds to take from 0 to h 
    ll s = 0, e = h;

    ll mid, ans = 0;

    while(s<=e){

        mid = s + (e-s)/2;

        ll total_sec = 0;

        for(ll i = 0; i<n-1; i++){
            total_sec+=min(mid,a[i+1]-a[i]);
            // cout<<i<<" "<<total_sec<<endl;
        }
        total_sec+=(mid);


        // cout<<s<<" "<<e<<" "<<mid<<" "<<total_sec<<endl<<endl;
        if(total_sec>=h){
            ans = mid;
            e = mid - 1;
        }else{
            s = mid + 1;
        }
    }
        // cout<<s<<" "<<e<<" "<<mid<<endl;

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