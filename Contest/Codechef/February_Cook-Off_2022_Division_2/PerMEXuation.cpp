// https://www.codechef.com/COOK138B/problems/PERMEX

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    string s;cin>>s;

    if(s[0]=='0' || s[1]=='0' || s[n]=='0'){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;

    cout<<0<<" ";
    for(int i = 0; i<=n; i++){
        if(s[i]=='0'){
            cout<<i<<" ";
        }
    }

    for(int i = 1; i<n; i++){
        if(s[i]=='1') cout<<i<<" ";
    }
    cout<<endl;
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