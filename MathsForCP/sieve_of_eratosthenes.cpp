#include<bits/stdc++.h>
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // Code
    
    // Total primes less than equal to 'n'

    int n; cin>>n;
    vector<bool> a(n+1,1);
    a[0] = 0, a[1] = 0;

    // Sieve of Eratosthenes
    for(int i = 2; i*i<=n; i++){
    	if(a[i]==1){
    		for(int j = i*i; j<=n; j+=i){
    			a[j] = 0;
    		}
    	}
    }


    //printing the primes

    for(int i = 0; i<=n; i++){
    	if(a[i]==1) cout<<i<<" ";
    }
    cout<<endl;
    
    return 0;
}

// Complexity: O (n log(log n)) --> when,  for(int i = 2; i<=n; i++) 
// Complexity: O (n log(log sqrt(n))) --> when,  for(int i = 2; i*i<=n; i++) 