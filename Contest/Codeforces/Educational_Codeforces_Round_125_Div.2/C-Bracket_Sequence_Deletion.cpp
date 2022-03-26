// https://codeforces.com/contest/1657/problem/C

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    string s;cin>>s;

    int cnt = 0;

    int i = 0, j = 0;
    while(i+1<n){
        if(s[i]=='(' || (s[i])==')' && s[i+1]==')'){
            i+=2;
        }else{
            j = i+1;
            while(j<n && s[j]!=')'){
                j++;
            }

            if(j==n) break;
            i = j+1;
        }
        cnt++;
    }

    cout<<cnt<<" "<<n-i<<endl;

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