// https://codeforces.com/problemset/problem/1097/B

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

    for(int i = 0; i<(1<<n); i++){
        int sum = 0;
        for(int j = 0; j<n; j++){
            if((i&(1<<j))!=0) sum+=a[j];
            else sum-=a[j];
        }

        if((sum%360)==0){
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
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
    // cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}