// https://www.codechef.com/START25B/problems/POLIN

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    vector<ll> a(n),b(n);
    for(int i = 0; i<n; i++){
        cin>>a[i]>>b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll ans = 0;

    int j = 0;
    for(int i = 0; i<n; i++){
        if(a[j]==a[i]){
            if(i==j) ans++;
        }else{
            j = i;
            i--;
        }
    }
    for(int i = 0; i<n; i++){
        if(b[j]==b[i]){
            if(i==j) ans++;
        }else{
            j = i;
            i--;
        }
    }


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