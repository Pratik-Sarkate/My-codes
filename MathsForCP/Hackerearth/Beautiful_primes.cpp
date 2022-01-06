// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/beautiful-primes/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;
int m = 1e9+7;

ll modular_exponent(ll a, ll b){
    if(b==0) return 1;

    if(b%2==0) return modular_exponent((a%m * a%m)%m, b/2);
    else return (a%m * modular_exponent((a%m * a%m)%m, b/2))%m;
}

ll extended_euclid(ll a, ll b, ll&x, ll&y){             // INVERSE using Extended Euclidean Algorithm

    if(b==0){
        x = 1;
        y = 0;
        return a;
    }

    ll x1, y1;
    ll g = extended_euclid(b, a%b, x1, y1);
    x = y1;
    y = x1 - (a/b)*y1;
    return g;
}


void solve(){
    ll n;cin>>n;
    vector<pair<ll, ll>> a(n);
    for(ll i = 0; i<n; i++){
        cin>>a[i].first;
    }
    for(ll i = 0; i<n; i++){
        cin>>a[i].second;
    }

    ll ans = 1;

    // GP sum = a*(r^n - 1)/(r-1) = a%m * (mod_exponenent(r,n) - 1)%m * mod_inverse(r-1,m) 

    // Example: 
    // 2^3 * 3^2 * 5^1 = (2^1 * 3^1 * 5^1) + (2^1 * 3^2 * 5^1) + (2^2 * 3^1 * 5^1) + (2^2 * 3^2 * 5^1) +(2^3 * 3^1 * 5^1) + (2^3 * 3^2 * 5^1)
                
    //                 = 30 + 90 + 60 + 180 + 120 + 360 =  840

    //                 = (2^1 * 2^2 * 2^3) * (3^1 + 3^2) * (5^1)

    //                 = (2+4+8) * (3+9) * (5) = 14 * 12 * 5 = 14 * 60 = 840

    for(ll i = 0; i<n; i++){
        ll x,y;
        extended_euclid((a[i].first-1ll),m,x,y);

        x = (x%m + m)%m;

        ll aa = ((a[i].first%m * (modular_exponent(a[i].first,a[i].second) - 1ll)%m)%m * x%m)%m;
        ans = (ans * aa%m)%m;

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

