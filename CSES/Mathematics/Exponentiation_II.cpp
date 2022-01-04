// https://cses.fi/problemset/task/1712/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;
ll M = 1e9+7;
 
ll pow(ll a, ll b, ll m){

    if(b==0) return 1;

    if(b%2==0) return pow((a%m * a%m)%m, b/2,m)%m;
    else return (a%m * pow((a%m * a%m)%m, b/2,m))%m;
} 
void solve(){
    ll a,b,c;cin>>a>>b>>c;
    ll d = pow(b,c,M-1ll); // Fermat's little theorem

    cout<<pow(a,d,M)<<endl; // using modular exponentiation

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