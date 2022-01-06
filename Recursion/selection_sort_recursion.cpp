#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;



void selection_sort(int *a,int n, int size){
    if(n==size) return;

    int ind = n;
    for(int i = n; i<size; i++){
        if(a[i]<a[ind]) ind = i;
    } 
    swap(a[ind],a[n]);
    selection_sort(a,n+1,size);
}

void solve(){
    int n;cin>>n;
    int a[n];
    for(int i = 0; i<n; i++) cin>>a[i];

    selection_sort(a,0,n);
    
    cout<<"Sorted array: "<<endl;
    for(int i = 0; i<n; i++) cout<<a[i]<<" ";
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
    int t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}