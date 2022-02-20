// https://codeforces.com/contest/1635/problem/C

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
    ll n;cin>>n;
    vector<ll> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    bool sorted = is_sorted(a.begin(),a.end());

    if(sorted){
        cout<<0<<endl;
        return;
    }


    if(a[n-1]>=0 && a[n-2]<=a[n-1]){
        cout<<n-2<<endl;
        for(int i = 0; i<n-2; i++){
            cout<<i+1<<" "<<n-1<<" "<<n<<" "<<endl;
        }
        return;
    }


    cout<<-1<<endl; 

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