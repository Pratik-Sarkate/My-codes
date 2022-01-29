// https://codeforces.com/contest/1624/problem/A

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;

    int mx = INT_MIN, mn = INT_MAX;
    for(int i = 0; i<n; i++){
        int x;cin>>x;
        mx = max(mx,x);
        mn = min(mn,x);
    }
    cout<<mx-mn<<endl;
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