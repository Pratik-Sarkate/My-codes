// https://www.codechef.com/START22B/problems/EVENXOR

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

vector<int> pre;

void find(){
    
    for(int i = 0; pre.size()<1000; i++){
        int cc = __builtin_popcount(i);
        
        if(cc%2==0) pre.push_back(i);

    }
}


void solve(){
    int n;cin>>n;
    for(int i = 0; i<n; i++){
        cout<<pre[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // Code
    find();
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}