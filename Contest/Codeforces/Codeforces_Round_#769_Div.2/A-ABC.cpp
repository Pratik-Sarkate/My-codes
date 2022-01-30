// https://codeforces.com/contest/1632/problem/A

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    string s;cin>>s;

    if(n>=3){
    	cout<<"NO"<<endl;
    	return;
    }

    if(n==1){
    	cout<<"YES"<<endl;
    	return;
    }else if(n==2){
    	if(s[0]!=s[1]) cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;
    }
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