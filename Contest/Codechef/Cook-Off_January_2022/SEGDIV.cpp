// https://www.codechef.com/COOK137C/problems/SEGDIV

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
    int n;cin>>n;
    
    int y = 2;
    for(int i = 0; i<n; i++){
        if(i&1){
            cout<<y<<" ";
            y+=3;
        }else{
            cout<<y<<" ";
            y+=1;
        }
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
    // create();
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}