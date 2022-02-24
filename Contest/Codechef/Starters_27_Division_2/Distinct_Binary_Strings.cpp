// https://www.codechef.com/START27B/problems/BINSTRING

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    string s;cin>>s;
    // set<string> st;
    // auto ptr = s.begin();

    int cnt = 0;
    // s = 0, e = 0;
    char prev = s[0];
    for(int i = 1; i<s.length(); i++){
        if(s[i-1]==s[i]) cnt++;
    }

    // cout<<cnt<<endl;
    cout<<s.length()-cnt<<endl;
    // cout<<endl;
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