#include<bits/stdc++.h>
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

int N = 1000000;    
vector<bool> sieve(N+2, true);

void createSieve(){

    sieve[0] = sieve[1] = 0;
    for(int i = 2; i*i<=N; i++){
        if(sieve[i]==1){
            for(int j = i*i; j<=N; j+=i){
                sieve[j] = 0;
            }
        }
    }
}

vector<int> generatePrimes(int n){

    vector<int> p;

    for(int i = 0; i<=n; i++){
        if(sieve[i]==1) p.push_back(i);
    }

    return p;
}



int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // Code

    createSieve();
    
    int t;cin>>t;  // test cases

    while(t--){
        int l,r;cin>>l>>r;          // eg: l = 110, r = 130

        // step 1: generate all the primes till sqrt(r), which are required to generate the sieve
        vector<int> primes = generatePrimes(sqrt(r));

        // step 2: create a dummy array of size (r-l+1) and make everyone 1.
        vector<int> dummy(r-l+1,1);

        // step 3: for all th prime nos, mark its multiple 0.
        for(auto pr: primes){

            int firstMultiple = (l/pr)*pr;      // first multiple of 2:  (110/2)*2 = 55*2 = 110 but incase of 7: (110/7)*7 = 15*7 = 105 < 110 

            if(firstMultiple<l) firstMultiple+=pr;  // For 11: firstMultiple = 110, but since it will be already marked so in the
                                                    // upcoming for loop we start from 121 so we take i = max of ('pr*pr' or 'firstMultiple' )

            for(int i = max(firstMultiple, pr*pr); i<=r; i+=pr){
                dummy[i-l] = 0;
            }
        }

        // step 4: get all the prime nos.

        for(int i = l; i<=r; i++){
            if(dummy[i-l]==1){
                cout<<i<<" ";
            }
        }
        cout<<endl;

    }
    

    return 0;
}