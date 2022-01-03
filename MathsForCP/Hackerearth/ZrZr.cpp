// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/algorithm/zrzr/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;



void solve(){
    ll n;cin>>n;
    ll cnt = 0;

    // total zero = total no of 5's in prime factorization of n! = [n/5] + [n/25] + [n/125] + ..... 
    for(ll i = 5; n/i>=1; i*=5){
        cnt+=(n/i);
    }

    cout<<cnt<<endl;
}


int main()
{
    fast_io;
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //code

    int t = 1;
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}   