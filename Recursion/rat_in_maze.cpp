#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

bool possible(vector<vector<int>> &a, vector<vector<int>> visited,int x,int y,int n){

    if((x>=0 && x<a.size()) && (y>=0 && y<a.size()) && visited[x][y]==0 && a[x][y]==1){
        return 1;
    }else{
        return 0;
    }
}


void rat_in_maze(vector<vector<int>> &a, vector<vector<int>> visited, vector<string> &ans, string path ,int x, int y, int n){

    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }

    visited[x][x] = 1;

    int xx = x, yy = y+1;                           // right  --> i,j+1
    if(possible(a,visited,xx,yy,n)){
        path.push_back('R');
        rat_in_maze(a,visited,ans,path,xx,yy,n);
        path.pop_back();
    }

    xx = x+1, yy = y;                               // down  --> i+1,j
    if(possible(a,visited,xx,yy,n)){
        path.push_back('D');
        rat_in_maze(a,visited,ans,path,xx,yy,n);
        path.pop_back();
    }

    xx = x, yy = y-1;                               // left  --> i,j-1
    if(possible(a,visited,xx,yy,n)){
        path.push_back('L');
        rat_in_maze(a,visited,ans,path,xx,yy,n);
        path.pop_back();
    }

    xx = x-1, yy = y;                               // up  --> i-1,j
    if(possible(a,visited,xx,yy,n)){
        path.push_back('U');
        rat_in_maze(a,visited,ans,path,xx,yy,n);
        path.pop_back();
    }

    visited[x][y] = 0;

}

void solve(){
    
    int n;cin>>n;
    vector<vector<int>> a(n,vector<int> (n)), visited(n,vector<int> (n));

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin>>a[i][j];
            visited[i][j] = 0;
        }
    }

    if(a[0][0]==0){
        cout<<"NOT POSSIBLE"<<endl;
        return;
    }
    vector<string> ans;
    string path = "";
    rat_in_maze(a,visited,ans,path,0,0,n);

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