// https://codeforces.com/contest/1626/problem/A

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    string s;cin>>s;
    vector<int> a(26,0);
    for(int i = 0; i<s.length(); i++){
        a[s[i]-'a']++;
    }

    string ans = "";
    for(int i = 0; i<26; i++){
        if(a[i]==2) ans.push_back('a'+i);
    }
    ans = ans + ans;

    for(int i = 0; i<26; i++){
        if(a[i]==1) ans.push_back('a'+i);
    }
    cout<<ans<<endl;
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