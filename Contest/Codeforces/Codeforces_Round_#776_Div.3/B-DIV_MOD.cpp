// https://codeforces.com/contest/1650/problem/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll l,r,a;cin>>l>>r>>a;

    ll smallest = (r - (r%a))-1;
    // cout<<smallest<<endl;

    ll z;
    if((smallest)>=l && (smallest)<=r){
        z = smallest;
    }else{
        z = r;
    }

    cout<<max(z/a + z%a, r/a + r%a)<<endl;
    // cout<<z/a + z%a<<endl;
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