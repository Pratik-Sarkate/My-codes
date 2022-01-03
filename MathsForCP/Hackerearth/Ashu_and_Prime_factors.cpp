// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/practice-problems/algorithm/ashu-and-prime-factors-4/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

int N = 1e6 + 5;
vector<int> sieve(N);
map<int,int> m;

void solve(){
    int x; cin>>x;
    cout<<m[x]<<endl;
}


int main()
{
    fast_io;
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //code

    sieve[0] = 0, sieve[0];
    for(int i = 2; i<N; i++) sieve[i] = i;

    for(int i = 2; i*i<N; i++){
        if(sieve[i]==i){
            for(int j = i*i; j<N; j+=i){
                if(sieve[j]==j) sieve[j] = i;
            }
        }
    }

    for(int i = 2; i<=1000000; i++){
        m[sieve[i]]++;
    }
    int t = 1;
    cin>>t;
    
    while(t--){
        solve();
    }
    
    return 0;
}   