// https://codeforces.com/problemset/problem/1561/C

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

bool compare(pair<int,int> a, pair<int,int> b){
    if(a.first<b.first){
        return true;
    }else if(a.first==b.first){
        if(a.second>b.second) return true;
        else return false;
    }

    return false;
}
void solve(){
    ll n;cin>>n;
    vector<pair<ll,ll>> a(n+1);     // < maximum , size >
    a[0].first = a[0].second = 0;
    vector<ll> k(n+1);      // for size of no. of monsters in each cave

    for(int i = 1; i<=n; i++){
        cin>>k[i];
        ll mx = 0;
        for(int j = 0; j<k[i]; j++){
            ll temp;cin>>temp;
            mx = max(mx,temp-j);
        }
        a[i].first = mx;
        
    }

    k[0] = 0;
    for(int i = 1; i<=n; i++){
        a[i].second = k[i];
    }

    sort(a.begin() + 1, a.end(),compare);
    

    ll mx = 0, pos = 0;
    for(int i = 1; i<=n; i++){
        mx = max(mx,a[i].first - pos);
        pos+=a[i].second;
    }
    cout<<mx+1<<endl;


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