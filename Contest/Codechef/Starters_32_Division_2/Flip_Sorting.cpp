// https://www.codechef.com/problems/FLIPSORT

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    string s;cin>>s;

    vector<pair<int,int>> ans;

    for(int i = n-1; i>=0; i--){

        if(s[i]=='0'){

            ans.push_back({1,i+1});
            for(int j = 0; j<=i; j++){
                if(s[j]=='1') s[j] = '0';
                else s[j] = '1';
            }
        }
    }

    cout<<ans.size()<<endl;
    for(auto it: ans) cout<<it.first<<" "<<it.second<<endl;
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