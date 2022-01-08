#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


int partition(vector<int> &a, int s, int e){                    // METHOD 1:

    int pivot = a[e]; // we have taken pivot number the last element of the array

    int i = s-1;   // this i will represent the larger number index 

    for(int j = s; j<e; j++){
        if(a[j]<pivot){
            i++;
            swap(a[j],a[i]);
        }
    }

    i++;   // this will be our pivot's index
    swap(a[i],a[e]);
    return i;
}

// int partition(vector<int> &arr, int s, int e){               // METHOD 2:
    
//     int pivot = arr[s];
    
//     int cnt = 0;  // to count no. of elements <= pivot
//     for(int i = s+1; i<=e; i++){
//         if(arr[i]<=pivot) cnt++;
//     }
    
//     int pivot_index = s + cnt;
//     swap(arr[s],arr[pivot_index]);
    
//     int i = s, j = e;
//     while(i<pivot_index && j>pivot_index){
//         while(arr[i]<=pivot){
//             i++;
//         }
//         while(arr[j]>pivot){
//             j--;
//         }
        
//         if(i<pivot_index && j>pivot_index){
//             swap(arr[i++],arr[j--]);
//         }
//     }
//     return pivot_index;
// }

void insertion_sort(vector<int> &a, int s, int e){

    if(s>=e) return;

    int pivot_index = partition(a,s,e);

    insertion_sort(a,s,pivot_index-1);
    insertion_sort(a,pivot_index+1,e);
}

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    insertion_sort(a,0,n-1);

    cout<<"Sorted array: "<<endl;
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }cout<<endl;
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