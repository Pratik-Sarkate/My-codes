// https://codeforces.com/contest/1658/problem/A

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    string s;cin>>s;

    int cnt = 0;
    
    int i = 0;
    while(i<n){
        if(s[i]=='0'){
            if(i+1 < n && s[i+1]=='0') cnt+=2;
            else if(i+2 < n && s[i+2]=='0'){
                cnt+=1;
                i++;
            }
        }
        i++;
    }
    cout<<cnt<<endl;

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




/*

Approach 2:

void solve(){
    int n;cin>>n;
    string s;cin>>s;

    vector<int> pos;

    for(int i = 0; i<n; i++){
        if(s[i]=='0') pos.push_back(i);
    }


    int cnt = 0;

    for(int i = 1; i<pos.size(); i++){
        if(pos[i]-pos[i-1] == 1){
            cnt+=2;
        }else if(pos[i] - pos[i-1] == 2){
            cnt++;
        }
    }

    cout<<cnt<<endl;
}

*/