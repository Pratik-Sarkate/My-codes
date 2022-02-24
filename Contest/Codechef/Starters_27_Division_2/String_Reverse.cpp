// https://www.codechef.com/START27B/problems/STR_REVERSE

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

bool isPali(string s){
    int i = 0, j = s.length()-1;
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }

        i++;
        j--;
    }

    return 1;
}

void solve(){
    string s;cin>>s;

    if(isPali(s)){
        cout<<0<<endl;
        return;
    }

    string x = s;
    reverse(s.begin(), s.end());
    int i,j; i = j = s.length()-1;
    int ans1 = 0;
    int ans2 = s.length()-1;

    
    while(i>=0){
        while(s[i]!=x[j]){
            ans1++;
            i--;
            if(i<0) break;
        }

        i--;
        j--;
        if(i<0) break;
    }

    cout<<min(ans1,ans2)<<endl;
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