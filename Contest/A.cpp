#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n,m,r,c;cin>>n>>m>>r>>c;
    int white = 0, black = 0;
    vector<vector<char>> a(n,vector<char> (m));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>>a[i][j];
            if(a[i][j]=='B') black++;
            else white++;
        }
    }

    if(black==0){
        cout<<-1<<endl;
        return;
    }else if(white==0 || a[r-1][c-1]=='B'){
        cout<<0<<endl;
        return;
    }

    //check row and col

    bool row = 0, col = 0;
    for(int i = 0; i<m; i++){
        if(a[r-1][i]=='B'){
            col = 1;
            break;
        }
    }
    for(int i = 0; i<n; i++){
        if(a[i][c-1]=='B'){
            row = 1;
            break;
        }
    }

    if(row || col){
        cout<<1<<endl;
    }else{
        cout<<2<<endl;
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