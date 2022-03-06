// https://www.codechef.com/COOK139B/problems/FIXWEIGHT

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

ll N = 1e6+5;
vector<int> sieve(N,1);

void prime(){

    sieve[0] = sieve[1] = 0;

    for(ll i = 2; i*i<=N; i++){
        if(sieve[i]==1){
            for(ll j = i*i; j<=N; j+=i){
                sieve[j] = 0;
            }
        }
    }
}


void solve(){
    ll n,x;cin>>n>>x;

    if(x<=n){
        cout<<"YES"<<endl;
        return;
    }


    // vector<ll> fact;
    bool flg = 0;
    for(ll i = n; i>=1; i--){

        ll temp = x/i;
        // cout<<i<<" "<<temp<<endl;
        if(((x/i)*i == x) && (x/i)<=n && (n-i+1)>=temp){
            flg = 1;
        } 
    }

    if(flg) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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