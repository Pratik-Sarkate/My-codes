#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


void insertion_sort(vector<int> &a, int n){

    for(int i = 1; i<n; i++){
        int temp = a[i], j = i-1;

        while(j>=0 && temp<a[j]){
            a[j+1] = a[j];
            j--;
        }

        a[j+1] = temp;
    }
    for(auto it: a) cout<<it<<" ";
    cout<<endl;

}


void bubble_sort(vector<int> &a, int n){

    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }

    for(auto it: a) cout<<it<<" ";
    cout<<endl;
}

void selection_sort(vector<int> &a, int n){

    for(int i = 0; i<n-1; i++){
        int minInd = i;

        for(int j = i+1; j<n; j++){
            if(a[j]<a[minInd]){
                minInd = j;
            }
        }

        swap(a[i],a[minInd]);
    }


    for(auto it: a) cout<<it<<" ";
    cout<<endl;
}

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    // selection_sort(a,n);
    // bubble_sort(a,n);
    insertion_sort(a,n);
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