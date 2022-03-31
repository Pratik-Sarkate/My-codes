// https://codeforces.com/contest/1660/problem/A

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

    if(n==1){
        (a[0]==1)? cout<<"YES"<<endl:cout<<"NO"<<endl;;
        return;
    }

    sort(a.begin(),a.end());

    if(a[n-1]-a[n-2] > 1){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;

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