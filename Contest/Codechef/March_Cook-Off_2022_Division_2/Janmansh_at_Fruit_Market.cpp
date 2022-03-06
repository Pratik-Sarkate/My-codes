// https://www.codechef.com/COOK139B/problems/JMARKET

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll x;cin>>x;

    vector<ll> a(3);
    for(int i = 0; i<3; i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());



    ll ans = (x-1)*a[0]+1*a[1];
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