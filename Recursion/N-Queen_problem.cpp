
// N Queen Problem: 

/*
    eg: n = 4

        0 1 0 0 
        0 0 0 1 
        1 0 0 0 
        0 0 1 0 
*/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


bool is_safe(vector<vector<int>> &a, int x, int y, int n){

    for(int row = x; row>=0; row--){            // for checking in a column
        if(a[row][y]==1) return false;
    }

    int row = x, col = y;
    while(row>=0 && col>=0){                    // for checking the top left going diagonal
        if(a[row][col]==1) return false;
        row--;
        col--;
    }

    row = x, col = y;
    while(row>=0 && col<a.size()){              // for checking the top right going diagonal
        if(a[row][col]==1) return false;
        row--;
        col++;
    }

    return true;

}


bool n_queen(vector<vector<int>> &a, int x, int n){   // we will check only row wise and move to next row if queen is placed successfully

    if(x>=n) return true;

    for(int col = 0; col<n; col++){
        if(is_safe(a,x,col,n)){
            a[x][col] = 1;
            if(n_queen(a,x+1,n)){    // checking if the queen can be placed in all the upcoming rows or not
                return true;
            }
            
            a[x][col] = 0;  // backtracking
            
        }
    }
    return false;  // if not able to place the queen in any of the column in that row then return false;

} 

void solve(){
    int n;cin>>n;

    vector<vector<int>> a(n,vector<int> (n,0));

    if(n_queen(a,0,n)){
        for(auto it: a){
            for(auto j:it){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }else{
        cout<<"Not Possible"<<endl;
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