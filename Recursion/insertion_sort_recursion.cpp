#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;



void insertion_sort(int *a, int n, int i){
    
    if(i==n) return;

    int current = a[i];
    int j = i-1;
    while(a[j]>current && j>=0){
        a[j+1] = a[j];
        j--;
    }
    a[j+1] = current;

    insertion_sort(a,n,i+1);
}

void solve(){
    int n;cin>>n;
    int a[n];
    for(int i = 0; i<n; i++) cin>>a[i];

    insertion_sort(a,n,1);
    
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