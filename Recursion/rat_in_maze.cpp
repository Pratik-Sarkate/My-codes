#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


// METHOD 1:

void rat_in_maze(vector<vector<int>> &a, vector<vector<int>> &visited, vector<string> &ans, string path ,int i, int j, int n){

    if(i==n-1 && j==n-1){
        ans.push_back(path);
        return;
    }

    visited[i][j] = 1;

    if(j+1<n && a[i][j+1]==1 && visited[i][j+1]==0){         // for right  i,j+1
        rat_in_maze(a,visited,ans,path+'R',i,j+1,n);
    }

    if(j-1>=0 && a[i][j-1]==1 && visited[i][j-1]==0){    // for left  i,j-1
        rat_in_maze(a,visited,ans,path+'L',i,j-1,n);
    }

    if(i-1>=0 && a[i-1][j]==1 && visited[i-1][j]==0){    // for up  i-1,j
        rat_in_maze(a,visited,ans,path+'U',i-1,j,n);
    }

    if(i+1<n && a[i+1][j]==1 && visited[i+1][j]==0){    // for down  i+1,j
        rat_in_maze(a,visited,ans,path+'D',i+1,j,n);
    }

    visited[i][j] = 0;
}


// METHOD 2:

// bool possible(vector<vector<int>> &a, vector<vector<int>> &visited,int x,int y,int n){

//     if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 && a[x][y]==1){
//         return 1;
//     }else{
//         return 0;
//     }
// }


// void rat_in_maze(vector<vector<int>> &a, vector<vector<int>> &visited, vector<string> &ans, string path ,int x, int y, int n){

//     if(x==n-1 && y==n-1){
//         ans.push_back(path);
//         return;
//     }

//     visited[x][y] = 1;


//     // right  --> i,j+1
//     if(possible(a,visited,x,y+1,n)){
//         rat_in_maze(a,visited,ans,path+'R',x,y+1,n);
//     }

//     // down  --> i+1,j
//     if(possible(a,visited,x+1,y,n)){
//         rat_in_maze(a,visited,ans,path+'D',x+1,y,n);
//     }

//     // left  --> i,j-1
//     if(possible(a,visited,x,y-1,n)){
//         rat_in_maze(a,visited,ans,path+'L',x,y-1,n);
//     }

//     // up  --> i-1,j
//     if(possible(a,visited,x-1,y,n)){
//         rat_in_maze(a,visited,ans,path+'U',x-1,y,n);
//     }

//     visited[x][y] = 0;

// }

void solve(){
    
    int n;cin>>n;
    vector<vector<int>> a(n,vector<int> (n)), visited(n,vector<int> (n,0));

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>a[i][j];
        }
    }

    if(a[0][0]==0){
        cout<<"NOT POSSIBLE"<<endl;
        return;
    }
    vector<string> ans;
    string path = "";
    rat_in_maze(a,visited,ans,path,0,0,n);
    sort(ans.begin(),ans.end());
    for(auto it:ans){
        cout<<it<<endl;
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