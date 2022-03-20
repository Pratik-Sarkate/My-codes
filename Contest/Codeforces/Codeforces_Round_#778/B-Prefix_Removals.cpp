// https://codeforces.com/contest/1654/problem/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    string s;cin>>s;
    int n = s.length();
    map<char,int> mp;
    for(int i = 0; i<n; i++){
        mp[s[i]]++;
    }
    reverse(s.begin(), s.end());

    while(1){
        char last = s.back();
        if(mp[last]>1){
            mp[last]--;
            s.pop_back();
        }else{
            break;
        }
    }

    reverse(s.begin(), s.end());
    cout<<s<<endl;
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