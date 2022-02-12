// https://codeforces.com/contest/1637/problem/A

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    vector<int> z = a;
    sort(a.begin(), a.end());

    bool flg = 0;
    for(int i = 0; i<n; i++){
        if(a[i]!=z[i]){
            flg = 1;
        }
    }

    if(flg==1) cout<<"YES"<<endl;
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