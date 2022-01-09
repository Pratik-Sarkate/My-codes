#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

vector<vector<int>> ans;


void subsets(vector<int> a, int n, int total){

    for(int i = 0; i<total; i++){
        int x = i;
        vector<int> temp;

        int j = 0;
        while(x>0){
            if(x&1){
                temp.push_back(a[j]);
            }
            x = x>>1;
            j++;
        }

        ans.push_back(temp);
    }
}

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    // total subsets = 2^n

    subsets(a,n,pow(2,n));
    for(auto i: ans){
        for(auto j: i){
            cout<<j<<" ";
        }cout<<endl;
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


/* 
    Eg: n = 3 , a = {1,2,3}
    
    total subsets = 2^n = 8
    Output:
                  --> (empty)
                1 
                2 
                1 2 
                3 
                1 3 
                2 3 
                1 2 3 

*/