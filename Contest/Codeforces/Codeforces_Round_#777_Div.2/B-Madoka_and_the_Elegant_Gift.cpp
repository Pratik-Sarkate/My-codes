// https://codeforces.com/contest/1647/problem/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n,m;cin>>n>>m;
    vector<string> v;
    for(int i = 0; i<n; i++){
        string temp;cin>>temp;
        v.push_back(temp);
    }

    for(int i = 0; i<n-1; i++){
        for(int j = 0; j<m-1; j++){
            int sum = v[i][j] + v[i][j+1] + v[i+1][j] + v[i+1][j+1] - 4*'0';
            if(sum==3){
                cout<<"NO"<<endl;
                return;
            }
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