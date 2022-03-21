// https://codeforces.com/contest/1654/problem/C

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll n; cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ll sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i];

    multiset<ll> p = {sum};
    multiset<ll> q(a.begin(), a.end());

    while (!p.empty()) {
        ll x = *--p.end();
        if (x < *--q.end()) break;
        p.erase(--p.end());
        if (q.find(x) != q.end())
            q.erase(q.find(x));
        else {
            p.insert(x/2);
            p.insert((x+1)/2);
        }
    }

    if(q.empty()){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
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