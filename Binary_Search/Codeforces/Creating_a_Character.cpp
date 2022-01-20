// https://codeforces.com/contest/1217/problem/A

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll str,i,exp;cin>>str>>i>>exp;

    if(exp==0){
        if(str>i){
            cout<<1<<endl;
        }else{
            cout<<0<<endl;
        }
        return;
    }

    ll s = 0, e = exp;

    ll mid, mn = s;

    while(s<=e){

        mid = s + (e-s)/2;

        if((str+mid)>(i+exp-mid)){

            e = mid - 1;
        }else{
            mn = mid;
            s = mid + 1;
        }
    }

    int ans = exp - mn;

    if((i+exp)<str) ans++;
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