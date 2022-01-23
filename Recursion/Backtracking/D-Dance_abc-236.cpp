// https://atcoder.jp/contests/abc236/tasks/abc236_d

// Backtracking ques

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


int maxi(int n,vector<vector<int>> &a,vector<bool> &visited,vector<int> &temp){


    if(temp.size()==2*n){

        int xr = 0;
        for(int i = 0; i<2*n; i+=2){
            xr = xr ^ (a[temp[i]][temp[i+1]]);
        }

        return xr;
    }

    int start;
    for(int i = 1; i<=2*n; i++){        // for choosing first number
        if(!visited[i]){
            start = i;
            visited[start] = 1; // included first number
            temp.push_back(i);
            break;
        }
    }

    int ans = 0;

    for(int i = 1; i<=2*n; i++){

        if(!visited[i]){
            visited[i] = 1;     // included second number
            temp.push_back(i); 
            
            ans = max(ans,maxi(n,a,visited,temp));

            visited[i] = 0;     // excluded second number
            temp.pop_back();
        }

    }


    temp.pop_back();        // removed first number
    visited[start] = 0;

    return ans;
}

void solve(){
    
    int n;cin>>n;
    vector<vector<int>> a(2*n+1,vector<int> (2*n+1));
    vector<bool> visited(2*n+1);

    for(int i = 1; i<2*n; i++){
        for(int j = i+1; j<=2*n; j++){
            cin>>a[i][j];
        }
    }  

    vector<int> temp;

    cout<<maxi(n,a,visited,temp)<<endl;

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