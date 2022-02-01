// https://codeforces.com/contest/1602/problem/C

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    vector<int> f(31,0);

    vector<int> a(n);

    for(int i = 0; i<n; i++){
        cin>>a[i];

        for(int j = 0; j<31; j++){
            if((1<<j)&a[i]) f[j]++;
        }
    }


    for(int i = 1; i<=n; i++){
        int flg = 1;
        for(int j = 0; j<31; j++){
            if((f[j]%i)==0){
                continue;
            }else{
                flg = 0;
                break;
            }
        }

        if(flg) cout<<i<<" ";
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