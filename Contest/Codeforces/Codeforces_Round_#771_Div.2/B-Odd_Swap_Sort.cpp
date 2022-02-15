// https://codeforces.com/contest/1638/problem/B

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

    if(is_sorted(a.begin(),a.end())){
        cout<<"YES"<<endl;
        return;
    }

    vector<int> odd,even;
    for(int i = 0; i<n; i++){
        if(a[i]&1) odd.push_back(a[i]);
        else even.push_back(a[i]);
    }

    if(is_sorted(odd.begin(),odd.end()) && is_sorted(even.begin(),even.end())) cout<<"YES"<<endl;
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