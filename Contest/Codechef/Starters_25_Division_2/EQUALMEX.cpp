// https://www.codechef.com/START25B/problems/EQUALMEX

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    vector<int> a(n+5,0);
    map<int,int> mp;

    int mx = INT_MIN;
    for(int i = 0; i<2*n; i++){
        int x;cin>>x;
        mp[x]++;
        mx = max(mx,x);
    }

    if(mp[0]==0){
        cout<<"YES"<<endl;
        return;
    }

    for(int i = 0; i<=mx+1; i++){

        if(mp[i]==0){
            cout<<"YES"<<endl;
            return;
        }else if(mp[i]==1){
            cout<<"NO"<<endl;
            return;
        }

        
        if(mp[i]%2==0){
            continue;
        }
    }
    cout<<"YES"<<endl;
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