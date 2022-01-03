// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/permutation-again/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){

    ll n;cin>>n;

    if(n==1){
        cout<<1<<endl;
        return;
    }
    // on calculating the maximum diff sum for all permutations of {1 2 3 4}, maximum sum can be 6  i.e (n-1)+(n-2)+ ... + (1) + (n/2 - 1)

    // for n: 
    // (1) (n) (2) (n-1) (3) (n-2) ..... (n/2) (n-n/2)   --> This will not be maximum case (1 5 2 4 3)
    // (n-n/2) (1) (n) (2) (n-1) (3) (n-2) ..... (n/2)   --> This will be maximum case (3 1 5 2 4)

    ll sum = ((n-1ll)*(n))/2ll + n/2 - 1;
    cout<<sum<<endl;

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