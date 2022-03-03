// https://www.codechef.com/START28B/problems/SUNDAY

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
    int n;cin>>n;
    vector<int> a(n);

    int ans = 8, cnt = 0;
    for(int i = 0; i<n; i++){
        int x;cin>>x;
        if(x==6 || x==7 ||x==13 || x==14 ||x==20 || x==21 ||x==27 || x==28) cnt++;
    } 

    cout<<n+ans-cnt<<endl;
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