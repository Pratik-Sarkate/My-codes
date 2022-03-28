// https://codeforces.com/contest/1658/problem/C

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;

    vector<int> a(n);

    int one = 0, mx = 0, pos = 0;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        if(a[i]==1){
            one++;
            pos = i;
        }

        mx = max(mx,a[i]);
    }


    if(one!=1){
        cout<<"NO"<<endl;
        return;
    }

    reverse(a.begin(),a.begin()+pos);
    reverse(a.begin()+pos,a.end());
    reverse(a.begin(),a.end());

    // for(auto it: a) cout<<it<<" ";
    // cout<<endl;


    for(int i = 0; i<n-1; i++){
        if(a[i+1]-a[i]>1){
            cout<<"NO"<<endl;
            return;
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