// https://www.codechef.com/LTIME105B/problems/PLPROCESS

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll n;cin>>n;
    vector<ll> a(n);
    ll sum = 0;

    for(int i = 0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
    }

    ll p1 = 0, p2 = sum;   
    ll ans = max(p1,p2);
    for(int i = 0; i<n; i++){

        p1+=a[i];
        p2-=a[i];
        ans = min(ans,max(p1,p2));
        // cout<<p1<<" "<<p2<<endl;
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