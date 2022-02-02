// https://www.codechef.com/START24B/problems/DIVREC

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    ll x,a,b;cin>>x>>a>>b;

    ll n = (x*b)/a;

    if((x%a)!=0){
        cout<<-1<<endl;
        return;
    }else{
        ll sum = 0, nn = n;
        for(ll i = 1; i*i<=nn; i++){
            if(sum>x) break;
            if((nn%i)==0){
                sum = i + sum;
                if((n/i)!=i) sum+=(n/i);
            }
        }

        if(sum==x){ 
            cout<<n<<endl;
        }else{
            cout<<-1<<endl;
        }
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