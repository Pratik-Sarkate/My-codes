#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;


int merge_arrays(int *a, int s, int e){

    int mid = s + (e-s)/2;
    int inversionCount = 0;
    
    int n1 = mid - s + 1;
    int n2 = e - mid;
    
    int x[n1], y[n2];           // Temporary arrays

    for(int i = 0; i<n1; i++){      // copying values in x
        x[i] = a[s+i];
    }

    for(int i = 0; i<n2; i++){      // copying values in y
        y[i] = a[mid+1+i];
    }


    int i = 0, j = 0;
    int k = s;      // pointer to main array

    while(i<n1 && j<n2){
        if(x[i] <= y[j]){
            a[k] = x[i];
            i++;
            k++;
        }else{
            a[k] = y[j];
            j++;
            k++;
            inversionCount += (n1-i);     // if b[j] < a[i]  the all the elements after a[i] will also be greater than b[j],
                                          // thus total elements = n1 - i  
                                          // (0) (1)....(i) till here no change... but from (i+1) (i+2) (i+3) ... (n1) = n1 - i elements would be inverted 
        }
    }

    while(i<n1){
        a[k] = x[i];
        i++;
        k++;
    }

    while(j<n2){
        a[k] = y[j];
        j++;
        k++;
    }

    return inversionCount;
}

int merge_sort(int *a, int s, int e){
    
    if(s>=e) return 0;            //base case

    int inversionCount = 0;
    int mid = s + (e-s)/2;

    inversionCount += merge_sort(a,s,mid);
    inversionCount += merge_sort(a,mid+1,e);

    inversionCount += merge_arrays(a,s,e);
    
    return inversionCount;
}

void solve(){
    int n;cin>>n;
    int a[n];
    for(int i = 0; i<n; i++) cin>>a[i];

    cout<<"inversion Count = "<<merge_sort(a,0,n-1)<<endl;

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