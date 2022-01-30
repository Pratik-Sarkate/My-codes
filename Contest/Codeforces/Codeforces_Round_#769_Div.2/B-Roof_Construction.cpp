// https://codeforces.com/contest/1632/problem/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    vector<int> ans;
    int s = 0;
    vector<int> used(n,0);

    
    int start = 0, end = n-1;

    while(start<=end){

    	if(used[end]==0){
    		int temp = end-1;
    		while(temp>=0 && used[temp]==1){
    			temp--;
    		}
    		if((end & temp)==0){
    			ans.push_back(end);
    			used[end] = 1;
    			ans.push_back(start);
    			used[start++] = 1;
    			// ans.push_back(temp);
    			// used[temp] = 1;
    		}else{
    			ans.push_back(end);
    			used[end] = 1;
    			// ans.push_back(temp);
    			// used[temp] = 1;
    		}
    		end--;
    	}else{
    		end--;
    	}
    }


    for(auto it: ans){
    	cout<<it<<" ";
    }cout<<endl;
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
    	// 2 3 1 4 5 6 7 0 8 9