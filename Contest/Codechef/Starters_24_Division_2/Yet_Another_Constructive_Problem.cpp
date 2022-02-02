// https://www.codechef.com/START24B/problems/ORANDCON

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll n;cin>>n;

    ll a = 0, b = 0, c  = 0;

    string s = "";
    ll temp = n;
    while(temp){
        if(temp&1) s = '1' + s; 
        else s = '0' + s;
        temp>>=1;
    }

    bool flg = 0;

    a = n;
    b = n;


    for(int i = 0; i<=32; i++){
        if(!(a&(1<<i))){
            a = a + (1<<i);
            break;
        }
    }
    // cout<<s<<endl;
    // cout<<((a|b)&(b|c)&(c|a))<<endl;
    cout<<a<<" "<<b<<" "<<c<<endl;
    // cout<<endl;
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