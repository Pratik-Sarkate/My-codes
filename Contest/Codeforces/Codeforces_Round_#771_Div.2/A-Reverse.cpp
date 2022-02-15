// https://codeforces.com/contest/1638/problem/A

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    vector<int> a(n+1), pos(n+1,0);

    for(int i = 1; i<=n; i++){
        cin>>a[i];
        pos[a[i]] = i;
    }

    // for(auto it: pos) cout<<it<<" ";
    // cout<<endl;

    for(int i = 1; i<=n; i++){

        if(a[i]!=(i)){

            int s = i, e = pos[i];
            while(s<=e) swap(a[s++],a[e--]);
            break;
        }
    }

    for(int i = 1; i<=n; i++) cout<<a[i]<<" ";
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