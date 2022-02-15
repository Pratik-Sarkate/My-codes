// https://codeforces.com/contest/1638/problem/C

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    vector<int> a(n+1);
    int mx = INT_MIN, ans = 0;
    vector<int> b(n+1,0);


    for(int i = 1; i<=n; i++){
        cin>>a[i];
        mx = max(mx,a[i]);
        b[i] = mx;
    }

    for(int i = 1; i<=n; i++){
        if(b[i]==i) ans++;
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