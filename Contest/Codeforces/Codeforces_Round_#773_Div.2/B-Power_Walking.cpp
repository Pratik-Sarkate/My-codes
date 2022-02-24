// https://codeforces.com/contest/1642/problem/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

bool compare(pair<int,int> &a, pair<int,int> &b){

    if(a.second>b.second) return true;
    else return false;
}

void solve(){
    int n;cin>>n;
    set<int> s;
    for(int i = 0; i<n; i++){
        int x;cin>>x;
        s.insert(x);
    }

    int diff = s.size();

    for(int i = 1; i<=n; i++){
        cout<<max(diff,i)<<" ";
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