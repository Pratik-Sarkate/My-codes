// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/calculations-with-modulopractice/editorial/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


// for finding (a^b)%m
ll modular_exponentiation(ll a, ll n, ll m){
    if(n==0) return 1;

    if(n%2==0) return modular_exponentiation((a%m) * (a%m), n/2, m);
    else return ((a%m) * modular_exponentiation((a%m) * (a%m), n/2, m))%m;
}


// for finding c^-1

ll extended_euclidean(ll a, ll b, ll &x, ll &y){

    if(b==0){
        x = 1;
        y = 0;
        return a;
    }

    ll x1,y1;
    ll g = extended_euclidean(b, a%b, x1, y1);
    x = y1;
    y = x1 - (a/b)*y1;
    return g;
}

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // Code
    
    ll a,b,c,m;cin>>a>>b>>c>>m;

    // for (a^b / c) % m =  ((a^b)%m * (c^-1)%m)%m

    // (a*b)%m = 1;
    ll A = modular_exponentiation(a,b,m);
    ll x,y;
    ll g = extended_euclidean(c,m,x,y);
    ll C = (x%m + m)%m;
    // cout<<"A = "<<A<<endl;
    // cout<<"C = "<<C<<endl;
    cout<<(ll)(A%m * C%m)%m<<endl;
    return 0;
}