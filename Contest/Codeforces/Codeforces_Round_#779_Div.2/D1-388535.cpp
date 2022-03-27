// https://codeforces.com/contest/1658/problem/D1

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

ll l, r, ans, ones2[22], ones1[22], zeros1[22], zeros2[22];

void fuc1(ll x){
    ll pos=0;
    for(int i = 0; i<=18; i++){
        if(x%2) ones1[i]++;
        else zeros1[i]++;
        x/=2;
    }
}

void fuc2(ll x){
    ll pos=0;
    for(int i = 0; i<=18; i++){
        if(x%2) ones2[i]++;
        else  zeros2[i]++;
        x/=2;
    }
}

void solve(){
    memset(zeros1, 0LL, sizeof(zeros1));
    memset(zeros2, 0LL, sizeof(zeros2));
    memset(ones1, 0LL, sizeof(ones1));
    memset(ones2, 0LL, sizeof(ones2));
    cin>>l>>r;
    for(int i = l; i<=r; i++) fuc1(i);
    for(int i = l; i<=r; i++){
            ll y;
            cin>>y;
            fuc2(y);
    }
    ans=0;
    ll y=1;
    for(int i = 0; i<=20; i++){
        if(ones1[i]!=ones2[i] || zeros1[i]!=zeros2[i])  ans+=y;
        y*=2;
    }
    cout<<ans<<endl;
}

int main(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}