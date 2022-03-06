// https://www.codechef.com/COOK139B/problems/MEXSPLIT

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    vector<int> a(n);
    int cnt = 0;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        if(a[i]==0) cnt++;
    }

    if(cnt<=(n-cnt)) cout<<n-cnt<<endl;
    else cout<<cnt<<endl;
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