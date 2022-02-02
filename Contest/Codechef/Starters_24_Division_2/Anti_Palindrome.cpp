// https://www.codechef.com/START24B/problems/ANTI_PAL

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void solve(){
    int n;cin>>n;
    string s;cin>>s;

    vector<int> f(26,0);

    for(int i = 0; i<n; i++){
        f[s[i]-'a']++;
    }

    int mx = 0;

    for(int i = 0; i<26; i++){
        mx = max(mx,f[i]);
    }

    if(mx>(n/2) || (mx==1 && (n&1)) || (n&1)){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;

    vector<pair<int,char>> a;

    for(int i = 0; i<26; i++){
        if(f[i]!=0){
            pair<int,char> temp;
            temp.first = f[i];
            temp.second = i + 'a';
            a.push_back(temp);
        }
    }

    sort(a.begin(), a.end());


    string front = "", end = "";

    for(int i = a.size()-1; i>=0; i--){
        int xx = a[i].first;
        char cc = a[i].second;

        if(i&1){
            while(xx--){
                end = cc + end;
            }
        }else{
            while(xx--){
                front+=(cc);
            }

        }
    }

    int z = n-1;
    int lo = 0, hi = n-1;

    string final = front + end;
    while(lo<=hi){

        if(final[lo]==final[hi]){

            swap(final[z--],final[hi]);
        }
        lo++;
        hi--;
    }

    cout<<final<<endl;

    
    

    // cout<<
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