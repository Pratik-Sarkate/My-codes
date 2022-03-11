// https://codeforces.com/contest/1651/problem/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll n;cin>>n;
    if(n>19){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;

        ll mul = 1;
        for(int i = 1; i<=n; i++){
            cout<<mul<<" ";
            mul*=3;
        }
        cout<<endl;
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