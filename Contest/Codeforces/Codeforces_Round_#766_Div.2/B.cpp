// https://codeforces.com/contest/1627/problem/B

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n,m;cin>>n>>m;

    vector<int> max_distance;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){       // find maximum distance of a point (i,j) among the four corners

            // int d1 = i + j;                 // top-left corner
            // int d2 = i + (m-j-1);           // top-right corner
            // int d3 = (n-i-1) + j;           // bottom-left corner
            // int d4 = (n-i-1) + (m-j-1);     // bottom-right corner

            // max_distance.push_back(max(max(d1,d2),max(d3,d4)));

            // OR

            max_distance.push_back(max(i,(n-i-1)) + max(j,(m-j-1)));
        }
    }

    sort(max_distance.begin(), max_distance.end());
    for(auto it:max_distance){
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