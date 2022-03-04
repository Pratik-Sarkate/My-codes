// https://codeforces.com/contest/1646/problem/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll n;cin>>n;
    vector<ll> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end());

    ll suma = a[0] + a[1], sumb = a[n-1];

    int i = 2, j = n-2;

    while(i<j){
        suma+=a[i++];
        sumb+=a[j--];
    }

    if(sumb>suma) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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