// https://codeforces.com/contest/1657/problem/A

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

void solve(){
    float a,b;cin>>a>>b;

    if(a==0 && b==0){
        cout<<0<<endl;
        return;
    }

    float power = a*a + b*b;
    float sqroot = (int)sqrt(a*a + b*b);
    sqroot = pow(sqroot,2.0);
    // cout<<"++ "<<sqroot<<" "<<power<<endl;
    if(sqroot==power){
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