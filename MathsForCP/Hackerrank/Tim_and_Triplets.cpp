// https://www.hackerrank.com/contests/fizzbuzz22-grand-finale/challenges/tim-and-triplets/problem

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

int N = 1e5+5;
vector<int> sieve(N,1), primes;
// vector<int> freq(N,0);
void prime(){

    sieve[0] = sieve[1] = 0;

    for(int i = 2; i*i<N; i++){
        if(sieve[i]==1){
            
            for(int j = i*i; j<N; j+=i){
                sieve[j] = 0;
            }
        }
    }

    for(int i = 2; i<N; i++){
        if(sieve[i]==1) primes.push_back(i);
    }
}

void solve(){
    int n;cin>>n;

    vector<int> xx;
    int i = 0;

    while(primes[i]<=n){
        xx.push_back(primes[i]);
        i++;
    }


    int xr, cnt = 0;
    int l = xx.size();

    // This is brute force approch to find 2 elements using 2 loops and third by checking if a[i]^a[j] is prime or not and also a[i]^a[j]<=n
    // So the output shows is that the first number will always be 2 and the next numbers will be of form (x,x+2) such their XOR is 2, where both are primes
    // FOR optimised approach: So we iterate over all the elements and find total adjacent pairs of primes with XOR = 2;


    // for(int i = 0; i<l-1; i++){       
    //     // if(flg[i]!=0) continue;
    //     for(int j = i+1; j<l; j++){
    //         // if(flg[j]!=0) continue;
    //         xr = xx[i]^xx[j];
    //         if(xr>xx[j] && sieve[xr]==1 && xr<=n){
    //             cnt++;
    //             // cout<<cnt<<" "<<xx[i]<<" "<<xx[j]<<" "<<xr<<endl;
    //         }
    //         // j+=(xr-1);
    //     }
    // }
    int cnt1 = 0;
    for(int i = 0; i<l-1; i++){
        // cout<<xx[i]<<" "<<xx[i+1]<<" "<<(xx[i]^xx[i+1])<<endl;
        if((xx[i]^xx[i+1])==2) cnt1++;
    }
    cout<<cnt1<<endl;
}

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // Code
    prime();
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}