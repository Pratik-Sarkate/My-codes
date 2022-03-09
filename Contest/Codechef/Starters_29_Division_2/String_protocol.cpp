// https://www.codechef.com/START29B/problems/STRP

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    string a;
    cin>>a;

    int cnt = 0;
    int i = 0;
    while(i<n){
        if(i+1 < n && a[i]==a[i+1]){
            cnt++;
            i+=2;
        }else{
            cnt++;
            i++;
        }
    }

    // if(j==n-1 && j!=0) cnt++;
    // cout<<i<<" "<<j<<endl;
    cout<<cnt<<endl;
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