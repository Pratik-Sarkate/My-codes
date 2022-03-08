// https://codeforces.com/contest/1650/problem/A

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    string s;cin>>s;
    char c;cin>>c;

    if(s.length()==1){
        if(s[0]==c){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        return;
    }

    bool flg = 0;
    for(int i = 0; i<s.length(); i++){
        if(s[i]==c && (i&1)==0){
            flg = 1;
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
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