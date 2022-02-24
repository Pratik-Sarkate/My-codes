// https://www.codechef.com/START27B/problems/NCOPRIMEN

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

ll gcd(ll a, ll b){
    if(b==0) return a;

    return gcd(b,a%b);
}

void solve(){
    ll n;cin>>n;
    vector<ll> a(n+1);
    a[n] = 1;

    int odd = 0, even = 0;
    int one = 0;
    for(ll i = 0; i<n; i++){
        cin>>a[i];
        if(a[i]&1) odd++;
        else even++;

        if(a[i]==1) one++;  
    }

    if(odd<=(2*n)/3){
        for(int i = 0; i<n; i++){
            if(a[i]&1) cout<<2<<" ";
            else cout<<a[i]<<" ";
        }
        cout<<endl;
        return;
    }


    bool flg = 1;
    for(int i = 0; i<=n; i++){
        if(flg){
            a[i] = a[i+1]*2;
            i++;
            flg = 0;
        }else{
            a[i] = a[i-1]*2;
            flg = 1;
        }
    }

    a.pop_back();
    for(auto it: a) cout<<it<<" ";
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