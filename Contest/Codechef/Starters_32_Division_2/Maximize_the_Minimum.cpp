// https://www.codechef.com/problems/MAXTHEMIN

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n,k;cin>>n>>k;

    vector<int> a(n);

    for(int i = 0; i<n; i++){
        cin>>a[i];
    }   


    sort(a.begin(),a.end());

    cout<<a[min(k,n-1)]<<endl;
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