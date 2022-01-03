// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/tic-tac-toe/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;
int m = 1e9+7;


ll extended_euclid(ll a, ll b, ll &p, ll &q){
    if(b==0){
        p = 1;
        q = 0;
        return a;
    }

    ll x1,y1;
    ll gcd = extended_euclid(b,a%b,x1,y1);
    p = y1;
    q = x1 - (a/b)*y1;
    return gcd;
}

ll inverse(ll a, ll b){
    ll x,y;
    ll g = extended_euclid(a,b,x,y);
    return (x%m + m)%m;
}


void solve(){

    ll n;cin>>n;

    //max formula = n*(n-1)*(2n-1)/6;   for (n-1) numbers square sum
    /* for min there would be condition when a person wins half the matched he played
       Thus, matches played by one person = lower_bound(n/2) or (n-1)/2  (as given n is always odd as per ques)
       Total players = n
       Therefore,
                min = (n/2)*(n/2)*n
                or we can do
                min = ((n-1)*(n-1)*n)/4
                for 4 we take modulo inverse of it for performing the modular arithmetic
                Same would be for 6 in case of max 
    */
    ll x = (n-1ll)%m;
    ll mx = (x%m * (x+1)%m * (2*x+1)%m * inverse(6,m)%m)%m;

    ll mn = (((n/2ll)%m * (n/2ll)%m)%m * n%m)%m;
    cout<<mn<<" "<<mx<<endl;

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