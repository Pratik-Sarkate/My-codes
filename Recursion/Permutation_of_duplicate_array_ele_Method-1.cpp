// Permutation of an array of possible duplicate elements

//  METHOD 1:

/*
    eg: n = 3  a[] = 1 2 2

    output:
            1 2 2 
            2 1 2 
            2 2 1 

*/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

void helper(vector<int> a, int index,vector<vector<int>> &ans){         // here array is passed by value.. so no need for backtracking (2nd swap statement)

    if(index>=a.size()){
        ans.push_back(a);
        return;
    }

    for(int j = index; j<a.size(); j++){
        if(index!=j && a[j]==a[index]) continue;
        swap(a[j],a[index]);
        helper(a,index+1,ans);
    }
}

vector<vector<int>> permute(vector<int> &a){

    sort(a.begin(), a.end());
    vector<vector<int>> ans;

    helper(a,0,ans);
    return ans;
}

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    vector<vector<int>> ans = permute(a);
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