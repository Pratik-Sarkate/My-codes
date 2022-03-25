// https://codeforces.com/contest/1657/problem/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
    ll n,b,x,y;cin>>n>>b>>x>>y;

    ll sum = 0, last = 0;
    for(int i = 0; i<n; i++){
        ll temp = last + x;
        ll temp1 = last - y;

        ll x;
        if(temp<=b){
            sum+=temp;
            last = temp;
        }else{
            sum+=temp1;
            last = temp1;
        }
        // cout<<last<<" ";
    }
    // cout<<endl;
    cout<<sum<<endl;
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