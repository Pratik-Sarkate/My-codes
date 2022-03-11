// https://codeforces.com/contest/1647/problem/A

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll n;cin>>n;
    string ans = "";

    bool flg = 1;
    while(n){
        if(flg){
            if(n>=2){
                n-=2;
                ans+='2';
            }else if(n==1){
                n--;
                ans = '1' + ans;
            }else{
                break;
            }

            flg = 0;
        }else{
            if(n>=1){
                n--;
                ans+='1';
            }else{
                break;
            }

            flg = 1;
        }
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