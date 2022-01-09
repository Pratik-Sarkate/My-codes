//https://leetcode.com/problems/letter-combinations-of-a-phone-number/submissions/

#include<bits/stdc++.h>
#define ll long long int
#define fast_io std::ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define endl '\n'
using namespace std;

vector<string> num = {"","","abc", "def", "ghi", "jkl","mno", "pqrs", "tuv", "wxyz"};
vector<string> ans;

void letter_combination(string s, int index, string output,vector<string> &ans){

    if(index>=s.length()){
        if(output.length()) ans.push_back(output);  // store only if size is greater than 0
        return;
    }

    string present = num[s[index]-'0'];  // string corresponding to the number on numpad

    for(int i = 0; i<present.length(); i++){

        output.push_back(present[i]); // include the alphabet

        letter_combination(s,index+1,output,ans);

        output.pop_back(); // remove the alphabet

    }
}

void solve(){
    string s;cin>>s;

    string output;
    letter_combination(s,0,output,ans);

    for(auto it:ans){
        cout<<it<<" ";
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

/* Eg: 23

   Output: ad ae af bd be bf cd ce cf 

*/