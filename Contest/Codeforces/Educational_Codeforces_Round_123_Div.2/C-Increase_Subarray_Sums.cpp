// https://codeforces.com/contest/1644/problem/C

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll n, x; cin>>n>>x;
    vector<ll> a(n); 
    for(int i = 0; i<n; i++) cin>>a[i];
 
    vector<ll> sums(n+1,-1e18);  // maximum sum for each no of elements
 
    sums[0] = 0;
    for (int i = 0; i<n; i++)
    {
        ll cur = 0;
        for (int j = i; j<n; j++)
        {
            cur+=a[j];
            sums[j-i+1] = max(sums[j-i+1], cur);
        }

        // for(auto it: sums) cout<<it<<" ";
        // cout<<endl;
    }

    // for(auto it: sums) cout<<it<<" ";
    // cout<<endl;

    
    vector<ll> ans(n+1,-1e18);

    for(int i = 0; i<=n; i++){  // no of elements to be taken

        for(int j = 0; j<=n; j++){ // sum of total no of elements

            ll temp = sums[j] + min(i,j)*x;
            ans[i] = max(ans[i],temp);
        }
    }

    for(auto it: ans) cout<<it<<" ";
    cout<<endl;
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