// https://www.codechef.com/START22B/problems/INTSEQ

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
	ll k;cin>>k;
	int cnt = 0;

	while(k%2==0){
		cnt++;
		k = k>>1;
		
	}

	if(cnt>=1)
		cout<<cnt<<endl;
	else cout<<0<<endl;
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