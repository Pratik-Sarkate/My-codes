// https://www.hackerearth.com/practice/basic-programming/recursion/recursion-and-backtracking/practice-problems/algorithm/n-queensrecursion-tutorial/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


bool is_possible(vector<vector<bool>> &ans, int x, int y, int n){

    // for column
    for(int i = x; i>=0; i--){
        if(ans[i][y]==1) return false;
    }

    // for top left diagonal

    int row = x, col = y;

    while(row>=0 && col>=0){
        if(ans[row][col]==1) return false;
        row--;
        col--;
    }

    // for top right diagonal

    row = x, col = y;

    while(row>=0 && col<n){
        if(ans[row][col]==1) return false;
        row--;
        col++;
    }

    return true;
}

bool n_queen(vector<vector<bool>> &ans, int x, int n){

    if(x>=n){
        return true;
    }


    for(int col = 0; col<n; col++){
        if(is_possible(ans,x,col,n)){
            ans[x][col] = 1;
            if(n_queen(ans,x+1,n)){
                return true;
            }

            ans[x][col] = 0;
        }
    }

    return false;
}

void solve(){
    int n;cin>>n;
    vector<vector<bool>> ans(n,vector<bool> (n,0));

    if(n_queen(ans,0,n)){
        for(auto i:ans){
            for(auto j:i){
                cout<<j<<" ";
            }cout<<endl;
        }
    }else{
        cout<<"Not possible"<<endl;
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
    // cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}