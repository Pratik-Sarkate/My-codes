// https://codeforces.com/contest/1642/problem/C

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll n,x;cin>>n>>x;
    map<ll,ll> mp;
    ll a;
    for(int i = 0; i<n; i++){
        cin>>a;
        mp[a]++;
    }

    ll cnt = 0;

    for(auto i: mp){
        while(i.second){
            if(mp[i.first * x]){
                mp[i.first * x]--;
                i.second--;
            }else{
                cnt+=i.second;
                break;
            }
        }
    }

    cout<<cnt<<endl;
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