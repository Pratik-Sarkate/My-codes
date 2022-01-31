// https://codeforces.com/contest/1633/problem/C

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll hc,dc;cin>>hc>>dc;
    ll hm,dm;cin>>hm>>dm;
    ll k,w,a;cin>>k>>w>>a;


    for(ll i = 0; i<=k; i++){

        ll new_hc = hc + a*i, new_dc = dc + w*(k-i);

        ll health1 = (new_hc + dm - 1ll)/dm;
        // if(new_hc%dm) health1+=1ll;

        ll health2 = (hm + new_dc - 1)/new_dc;
        // if(hm%new_dc) health2+=1ll;

        if(health1>=health2){
            cout<<"YES"<<endl;
            return;
        }

        // if((new_hc+dm)/dm>=(hm+new_dc)/new_dc)
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