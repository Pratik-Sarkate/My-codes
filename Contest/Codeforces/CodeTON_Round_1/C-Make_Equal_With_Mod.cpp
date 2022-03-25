// https://codeforces.com/contest/1656/problem/C

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    vector<int> a(n);

    bool present = 0;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        if(a[i]==1) present = 1;
    }

    sort(a.begin(),a.end());


    if(!present){
        cout<<"YES"<<endl;
        return;
    }

    for(int i = 1; i<n; i++){
        if(a[i]==a[i-1]+1){
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