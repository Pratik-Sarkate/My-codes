// Permutation of an array of unique elements

// Total permutations of an array: n!

/*
    eg: n = 3  a[] = 1 2 3

    output:
            1 2 3       
            1 3 2 
            2 1 3 
            2 3 1 
            3 2 1 
            3 1 2 
*/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

void permutations(vector<int> &a, int i,vector<vector<int>> &ans){

    if(i>=a.size()){
        ans.push_back(a);
        return;
    }

    for(int j = i; j<a.size(); j++){
        swap(a[j],a[i]);
        permutations(a,i+1,ans);
        swap(a[j],a[i]);
    }
} 

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    vector<vector<int>> ans;

    permutations(a,0,ans);
    for(auto it: ans){
        for(auto j: it){
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