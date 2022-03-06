// https://www.codechef.com/COOK139B/problems/ALTERNATEDIV

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    vector<int> a(n+1);

    for(int i = 1; i<=n; i+=2){
        a[i] = i;
    }

    for(int i = 2; i<=n; i+=2){
        a[i] = a[i-1]*2;
    }

    for(int i = 1; i<=n; i++){
        cout<<a[i]<<" ";
    }

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