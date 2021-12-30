#include<bits/stdc++.h>
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


bool possible(vector<int> a, int p, int n, int mid){

    int prata = 0;

    for(int i = 0; i<n; i++){
        int r = a[i];
        int x = 1;
        int time = time = r*(x*(x+1))/2;
        
        while(time<=mid){
            prata++;
            x++;
            time = r*(x*(x+1))/2;
            
        }

        if(prata>=p) return 1;
    }

    return 0;

}

void solve(){
    int p,n;cin>>p>>n;

    vector<int> a(n);
    int mx = INT_MIN;
    for(int i = 0; i<n; i++){
        cin>>a[i];
        mx = max(mx,a[i]);
    }

    int s = 0, e = mx*((p*(p+1))/2);

    int mid, ans = 0;

    // int cnt = 0;
    while(s<=e){
        mid = s + (e-s)/2;
        // cout<<cnt++<<" "<<s<<" "<<e<<" "<<mid<<" "<<ans<<endl;

        if(possible(a,p,n,mid)){
            ans = mid;
            e = mid - 1;
        }else{
            s = mid + 1;
        }

    }

    // cout<<s<<" "<<e<<" "<<mid<<endl;
    cout<<ans<<endl;
}


int main()
{
    fast_io;
    
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    cin>>t;
    // cin.ignore(); must be there when using getline(cin, s)
    
    while(t--){
        solve();
    }
    
    return 0;
}   