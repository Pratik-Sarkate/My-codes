// https://codeforces.com/contest/1634/problem/C

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll n,k;cin>>n>>k;


    if(k==1){
        cout<<"YES"<<endl;
        for(int i = 1; i<=n; i++){
            cout<<i<<endl;
        }
        return;
    }

    if(n&1){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;

    int even = 2, odd = 1;
    for(int i = 1; i<=n; i++){
        if(i&1){
            for(int j = 0; j<k; j++){
                cout<<odd<<" ";
                odd+=2;
            }
            cout<<endl;
        }else{
            for(int j = 0; j<k; j++){
                cout<<even<<" ";
                even+=2;
            }
            cout<<endl;
        }
    }

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