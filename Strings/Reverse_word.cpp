include<bits/stdc++.h>
#define ll long long int
#define ull unsigned long long
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define MOD 1000000007
#define inf 1000000000000000001
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define all(v) (v).begin(), (v).end()
#define eb emplace_back
#define pb push_back
#define f first
#define s second
#define print(x) cout << (x) << '\n'
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;



void solve(){
    string s;
    getline(cin,s);
    cin.ignore();

    int j = 0, n = s.length();

    for(int i = 0; i<n,j<n; i++){
        if(s[i]==' ' || i==n-1){
            int l = j, r;
            if(i==n-1) r = i;
            else r = i-1;

            while(l<=r){
                swap(s[l],s[r]);
                l++;
                r--;
            }
            j = i+1;
            i++;
        }

    }
    cout<<s<<endl;
}


int main()
{
    fast_io;
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    // cin>>t;
    // cin.ignore(); must be there when using getline(cin, s)
    
    while(t--){
        solve();
    }
    
    return 0;
}
