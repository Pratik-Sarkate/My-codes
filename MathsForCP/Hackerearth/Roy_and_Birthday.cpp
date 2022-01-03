// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/roy-and-birthday/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;
int m = 1e9+7;
ll N = 1000006;
vector<ll> pre(N,1);


ll modulo_inverse(ll a, ll b, ll &x, ll &y){

    if(b==0){
        x = 1;
        y = 0;
        return a;
    }

    ll x1,y1;
    ll gcd = modulo_inverse(b,a%b,x1,y1);
    x = y1;
    y = x1 - (a/b)*y1;
    return gcd;
}

ll inverse(ll a, ll b){

    ll x,y;
    ll g = modulo_inverse(a,b,x,y);
    return (x%m + m)%m;
}


void solve(){
    string s;cin>>s;

    ll n = s.length();
    vector<ll> freq(26,0);

    ll vow = 0, cons = 0;
    for(ll i = 0; i<n; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            vow++;
            freq[s[i]-'a']++;
        }
        else{
            cons++;
            freq[s[i]-'a']++;
        }
    }

    if(vow>cons+1){
        cout<<-1<<endl;
        return;
    }else{
        // cout<<cons<<" "<<vow<<endl;
        // cout<<pre[cons]<<" "<<pre[vow]<<endl;

        /*
            positions for vowel = (cons+1)C(vow)    -----> It is no. of ways to place vowels in cons+1 places between the consonants

            Ans = (position for vowels) * (vow!) * (cons!) 'divided by'
                  [(product of factorial of all the vowels with freq > 1) * (product of factorial of all the consonants with freq > 1) ]
        */
        ll vowpos = (pre[cons+1]%m * inverse(pre[vow],m)%m * inverse(pre[cons+1-vow],m)%m)%m;

        ll ansvow = 1;
        ll anscons = 1;

        for(int i = 0; i<26; i++){
            if(freq[i]>1){
                if((i+'a')=='a' || (i+'a')=='e' || (i+'a')=='i' || (i+'a')=='o' || (i+'a')=='u'){
                    ansvow = (ansvow%m * pre[freq[i]]%m)%m;

                }else{
                    anscons = (anscons%m * pre[freq[i]]%m)%m;
                }
            } 
        }
        anscons = (inverse(anscons,m) * pre[cons]%m)%m;
        ansvow = (inverse(ansvow,m) * pre[vow]%m)%m;
        
        cout<<(vowpos%m * (ansvow%m * anscons%m)%m)%m<<endl;
    }
}

int main()
{
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // Code

    for(ll i = 2; i<N; i++){
        pre[i] = (pre[i-1] * i)%m;
    }


    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}