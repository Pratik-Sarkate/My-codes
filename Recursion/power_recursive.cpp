#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

int power(int a, int b){
	if(b==0) return 1;

	if(b&1) return a*power(a*a,b/2);
	else return power(a*a,b/2);
}

// Example: a = 2 , b = 5    ----> a^b = 2^5

// whenever 'b' is odd we multiply ans with the present value of 'a'

// --> a = 2 = 2^1, b = 5 ..... (2^1)^5 = 2 * pow(2*2,5/2)       __returns 32
// --> a = 4 = 2^2, b = 2 ..... (2^2)^2 = pow(4*4, 2/2)          __returns 16
// --> a = 16 = 2^4, b = 1 .... (2^4)^1 = 16 * pow(16*16, 1/2)   __returns 16
// --> a = 256 = 2^8, b = 0 ....(2^8)^0 = 1                      __returns 1

void solve(){
	int a,b;cin>>a>>b;
	cout<<power(a,b)<<endl;
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
    // cin>>t;
    while(t--){
    	solve();
    }
    
    return 0;
}