// https://codeforces.com/contest/1660/problem/C

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    string s;cin>>s;
    int n = s.length();
    vector<int> ans(n+1,0);
    vector<int> last(26,0);
    for(int i = 1; i<=n; i++)  {
        if(last[s[i-1]-'a'] != 0) {
            ans[i] = 2 + ans[last[s[i-1]-'a']-1];
        }
        ans[i] = max(ans[i], ans[i-1]);
        last[s[i-1]-'a'] = i;
    }
    cout<<n-ans[n]<<endl;
    
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