// https://www.codechef.com/COOK137C/problems/MEANMAX

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    ll x = 0;
    for(int i = 0; i<n-1; i++){
        x+=a[i];
    }

    double ans = double(x)/double(n-1) + a[n-1];
    cout<<fixed<<setprecision(6)<<ans<<endl;

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