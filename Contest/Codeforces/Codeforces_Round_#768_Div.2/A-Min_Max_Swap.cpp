// https://codeforces.com/contest/1631/problem/A

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    vector<int> af(10001,0), bf(10001,0);

    for(int i = 0 ;i<n; i++){
        cin>>a[i];
        af[a[i]]++;
    }

    for(int i = 0; i<n; i++){
        cin>>b[i];
        bf[b[i]]++;
    }

    
    int i = 0;
    while(i<n){
        if(b[i]>a[i]) swap(b[i],a[i]);
        i++;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    cout<<a[n-1]*b[n-1]<<endl;

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