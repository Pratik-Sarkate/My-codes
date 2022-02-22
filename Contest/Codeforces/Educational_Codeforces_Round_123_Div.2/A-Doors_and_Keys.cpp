// https://codeforces.com/contest/1644/problem/A

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    string s;cin>>s;

    int r,g,b,R,G,B;
    for(int i = 0; i<s.length(); i++){
        if(s[i]=='r') r = i;
        if(s[i]=='g') g = i;
        if(s[i]=='b') b = i;
        if(s[i]=='R') R = i;
        if(s[i]=='G') G = i;
        if(s[i]=='B') B = i;
    }


    if(r<R && g<G && b<B) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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