// https://cses.fi/problemset/task/1095

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;
int m = 1e9+7;
 
ll pow(ll a, ll b){

    if(b==0) return 1;

    if(b%2==0) return pow((a%m * a%m)%m, b/2);
    else return (a%m * pow((a%m * a%m)%m, b/2))%m;
} 
void solve(){
    ll a,b;cin>>a>>b;

    cout<<pow(a,b)<<endl;
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