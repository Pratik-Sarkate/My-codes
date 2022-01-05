#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void bubble_sort(int *a, int n){

    if(n<=1) return;

    for(int i = 1; i<n; i++){
        if(a[i-1]>a[i]){
            swap(a[i-1],a[i]);
        }
    }

    bubble_sort(a, n-1);
}

void solve(){
    int n;cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    bubble_sort(a,n);

    cout<<"Sorted array: "<<endl;
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
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