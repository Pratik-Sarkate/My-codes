// https://codeforces.com/contest/1624/problem/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll a,b,c;cin>>a>>b>>c;

    bool flg = 0;

    if(2ll*b<=(a+c)){
        if((a+c)%(2ll*b)==0){
            cout<<"YES"<<endl;
            return;
        }
    }else{
        if((2ll*b-c)%a==0){
            cout<<"YES"<<endl;
            return;
        }
        if((2ll*b-a)%c==0){
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
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}