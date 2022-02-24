// https://codeforces.com/contest/1642/problem/A

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    vector<pair<int,int>> a(3);

    for(int i = 0; i<3; i++){
        cin>>a[i].second>>a[i].first;
    }

    sort(a.begin(),a.end());

    // for(auto it: a) cout<<it.first<<" "<<it.second<<endl;
    // cout<<endl;

    if(a[1].first==a[2].first){
        cout<<abs(a[1].second-a[2].second)<<endl;
    }else{
        cout<<0<<endl;
    }
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