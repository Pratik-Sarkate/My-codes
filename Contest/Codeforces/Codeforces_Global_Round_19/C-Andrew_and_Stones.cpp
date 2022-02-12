// https://codeforces.com/contest/1637/problem/C

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    vector<ll> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    sort(a.begin()+1,a.end()-1);

    // for(auto it: a) cout<<it<<" ";
    // cout<<endl;


    if(n==3){
        if(a[1]&1){
            cout<<-1<<endl;
        }else{
            cout<<a[1]/2<<endl;
        }
        return;
    }


    if(n>3 && a[1]==1 && a[n-2]==1){
        cout<<-1<<endl;
        return;
    }

    ll odd = 0, even = 0;
    ll ans = 0, parity = 0;
    for(int i = 1; i<n-1; i++){
        
        if(a[i]&1){
            ans+=(a[i]/2);
            parity++;
        }else{
            ans+=(a[i]/2);
        }
    }

    ans+=(parity);
    // if(parity&1){
    //     ans++;
    // }

    cout<<ans<<endl;


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