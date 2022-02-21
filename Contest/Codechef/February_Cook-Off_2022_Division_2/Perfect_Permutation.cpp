// https://www.codechef.com/COOK138B/problems/PERFPERM

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n,k;cin>>n>>k;

    if(n==1){
        cout<<1<<endl;
        return;
    }

    if(n==2){
        if(k==1) cout<<2<<" "<<1<<endl;
        else cout<<1<<" "<<2<<endl;
        return;
    }

    if(k==(n-1)){
        cout<<n<<" ";
        for(int i = 2; i<=n-1; i++) cout<<i<<" ";

        cout<<1<<endl;
        return;
    }

    


    // if(k==(n-1)){
    //     for(int i = 2; i<=n; i++){
    //         cout<<i<<" ";
    //     }
    //     cout<<1<<endl;
    //     return;
    // }

    vector<int> ans(n+1);
    ans[0] = 0;

    for(int i = 1; i<=k; i++){
        ans[i] = i;
    }

    int last = k+1;

    for(int i = k+1; i<=n; i++){
        ans[i] = i+1;
    }

    if(k!=n) ans[n] = last;

    for(int i = 1; i<=n; i++) cout<<ans[i]<<" ";
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