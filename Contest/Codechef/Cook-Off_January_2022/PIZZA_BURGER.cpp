// https://www.codechef.com/COOK137C/problems/PIZZA_BURGER

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int x,y,z;cin>>x>>y>>z;

    if(x>=y) cout<<"PIZZA"<<endl;
    else if(x>=z) cout<<"BURGER"<<endl;
    else cout<<"NOTHING"<<endl;
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