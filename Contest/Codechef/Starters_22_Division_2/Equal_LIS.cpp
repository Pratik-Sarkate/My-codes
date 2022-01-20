// https://www.codechef.com/START22B/problems/EQLIS

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
	int n;cin>>n;

	if(n==2){
		cout<<"NO"<<endl;
		return;
	}

	cout<<"YES"<<endl;

	if(n&1){
		for(int i = 1; i<=n/2; i++){
			cout<<i<<" ";
		}
		for(int i = n; i>n/2; i--){
			cout<<i<<" ";
		}
		cout<<endl;
	}else{
		
		for(int i = 2; i<=n/2; i++){
			cout<<i<<" ";
		}

		cout<<1<<" ";

		for(int i = n; i>n/2; i--){
			cout<<i<<" ";
		}
		cout<<endl;
	}
	
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