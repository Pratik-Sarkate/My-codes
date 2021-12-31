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
 
bool possible(vector<ll> a, ll n, ll m, ll mid){
 
    ll sum = 0;
    for(int i = 0; i<n; i++){
        if(a[i] >= mid) sum+=(a[i]-mid);
    }
 
    // cout<<sum<<endl;
 
    if(sum>=m){
        return true;
    }else{
        return false;
    }
 
    
 
}
 
void solve(){
    ll n,m;cin>>n>>m;
    vector<ll> a(n);
 
    for(ll i = 0; i<n; i++) cin>>a[i];
    sort(a.begin(),a.end());
    ll mx = a[n-1];
 
    int s = 0, e = mx;
 
    ll mid, ans;
 
    while(s<=e){
        mid = s + (e-s)/2;
 
        // cout<<cc++<<" "<<mid<<" ";
        if(possible(a,n,m,mid)){
            s = mid + 1;
            ans = mid;
        }else{
            e = mid - 1;
        }
 
 
    }
 
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
    // cin>>t;
    // cin.ignore(); must be there when using getline(cin, s)
    
    while(t--){
        solve();
    }
    
    return 0;
} 

//Complexity: O(n*log(n))