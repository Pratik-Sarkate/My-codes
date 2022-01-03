// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/selection-of-cities-2/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;
int m = 1e9+7;

ll pow(ll a, ll b){
    if(b==0) return 1;

    if(b%2==0) return pow((a%m * a%m)%m,b/2);
    else return (a%m * (pow((a%m * a%m)%m,b/2))%m)%m;
    // if(b&1) return (a%m * pow((a%m * a%m)%m, b/2))%m;
    // else return (pow((a%m * a%m)%m, b/2))%m;
}

void solve(){
    ll n;cin>>n;


/* The solution is: C = combination
    ans = C(1 city) + C(2 cities) + C(3 cities) + ..... + C(n cities)

    ie  = nC1 + nC2 + nC3 + ..... + nCn
    
    Binomial expansion of (1+x)^n = nC0*x^0 + nC1*x1 + nC2*x2 + nC3*x3 +.....+ nCn*xn 
    putting x = 1, and bringing nC0 to LHS
    Our ans becomes =>   2^n - 1 = nC1 + nC2 + nC3 + ..... + nCn
*/

    cout<<pow(2ll,n)-1ll<<endl;

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