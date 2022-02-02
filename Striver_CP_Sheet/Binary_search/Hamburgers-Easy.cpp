// https://codeforces.com/contest/371/problem/C

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    string s;cin>>s;
    ll nb,ns,nc,pb,ps,pc,r;cin>>nb>>ns>>nc>>pb>>ps>>pc>>r;


    ll bb = 0, ss = 0, cc = 0;

    for(ll i = 0; i<s.length(); i++){
        if(s[i]=='B') bb++;
        else if(s[i]=='S') ss++;
        else cc++;
    }
    
    // binary search on total burgers possible x

    ll lo = 0, hi = r + max(nb,max(ns,nc));

    ll mid, ans = 0;

    while(lo<=hi){
        mid = lo + (hi - lo)/2ll;


        // f(mid) = max(bb*mid - nb)*pb + max(ss*mid - ns)*ps + max(cc*mid - nc)*pc

        ll req_money = max(0ll,bb*mid - nb)*pb + max(0ll,ss*mid - ns)*ps + max(0ll,cc*mid - nc)*pc; // required money

        if(req_money<=r){
            ans = mid;
            lo = mid + 1;
        }else{
            hi = mid - 1;
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
    // cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}