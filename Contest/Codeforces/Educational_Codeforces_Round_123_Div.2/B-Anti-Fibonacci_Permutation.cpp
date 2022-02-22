// https://codeforces.com/contest/1644/problem/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;

    vector<int> a(n);
    for(int i = 0; i<n; i++){
        a[i] = n-i;
    }

    for(auto it: a) cout<<it<<" ";
    cout<<endl;

    for(int i = 0; i<n-1; i++){
        int j = i+1;
        swap(a[i],a[j]);
        for(auto it: a) cout<<it<<" ";
        cout<<endl;
        swap(a[i],a[j]);
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