// https://codeforces.com/contest/1624/problem/C

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    vector<ll> a(n+1);
    a[0] = 0;
 
    for(int i = 1; i<=n; i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
 
    vector<bool> used(n+1,0);
 
    for(int j = n; j>=1; j--){
        while(a[j]>n || used[a[j]]==1){
            a[j]/=2;
        }
 
        if(a[j]>0) used[a[j]] = 1;
        else {
            cout<<"NO"<<endl;
            return;
        }
    }
 
    cout<<"YES"<<endl;
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