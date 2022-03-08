// https://codeforces.com/contest/1650/problem/C

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
#define inf 1000000000000000001
using namespace std;


void solve(){
    // string c;cin>>c;
    ll n,m;cin>>n>>m;
    vector<pair<ll,pair<ll,ll>>> a(m);

    for(int i = 0; i<m; i++){
        cin>>a[i].second.first>>a[i].first;
        a[i].second.second = i+1;
    }

    sort(a.begin(), a.end());

    ll sum = 0;
    vector<pair<ll,ll>> final;
    for(int i = 0; i<2*n; i++){
        final.push_back(a[i].second);
        sum+=a[i].first;
    }

    cout<<sum<<endl;

    sort(final.begin(), final.end());
    // cout<<final.size()<<endl;
    for(int i = 0; i<n; i++){
        cout<<final[i].second<<" "<<final[2*n-i-1].second<<endl;
    }
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
    string s;
    while(t--){
        getline(cin, s);;
        solve();
    }
    
    return 0;
}