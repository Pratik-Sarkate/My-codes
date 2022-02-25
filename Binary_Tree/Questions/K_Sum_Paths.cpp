// https://practice.geeksforgeeks.org/problems/k-sum-paths/1/#

/** Approach:  TC = O(n^2)   SC = O(n)  **/


class Solution{
  public:
  
    void solve(Node* root, int k, int &count, vector<int> &v){
        
        // base case
        if(root == NULL){
            return;
        }
        
        v.push_back(root->data);
        
        // left
        solve(root->left,k,count,v);
        
        // right
        solve(root->right,k,count,v);
        
        int sum = 0;
        for(int i = v.size()-1; i>=0; i--){
            sum+=v[i];
            if(sum==k){
                count++;
            }
        }
        
        v.pop_back();
    }
    
    int sumK(Node *root,int k)
    {
        int count = 0;
        vector<int> v;
        
        solve(root,k,count,v);
        
        return count;
    }
};