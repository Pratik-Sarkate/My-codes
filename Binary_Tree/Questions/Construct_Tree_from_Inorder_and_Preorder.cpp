// https://practice.geeksforgeeks.org/problems/construct-tree-1/1/#

/* Approach 1:  TC = O(n^2)  SC = O(n) */

class Solution{
    public:
    
    int findPos(int in[], int k, int n){
        for(int i = 0; i<n; i++){
            if(in[i]==k) return i;
        }
        
        return -1;
    }
    
    Node* solve(int in[],int pre[], int &index, int inorderStart, int inorderEnd, int n){
        
        // base case
        if(index>=n || inorderStart>inorderEnd){
            return NULL;
        }
        
        // create a root node for elements
        int element = pre[index++];
        Node* root = new Node(element);
        int position = findPos(in,element,n);
        
        // recursive call, here we first build the left subtree in case of Preorder and Inorder
        root->left = solve(in,pre,index,inorderStart,position-1,n);
        root->right = solve(in,pre,index,position+1,inorderEnd,n);
        
        return root;
        
    }
    
    
    Node* buildTree(int in[],int pre[], int n)
    {
        int preorderIndex = 0;
        Node* ans = solve(in,pre,preorderIndex,0,n-1,n);
        return ans;
    }
};



/* Approach 2:  TC = O(n log(n) )  SC = O(n)*/
/* use unordered_map to reduce TC to O(n) */

class Solution{
    public:
    
    void createMapping(int in[], map<int,int> &nodeToIndex, int n){
        
        for(int i = 0; i<n; i++){
            nodeToIndex[in[i]] = i;
        }
        
    }
    
    Node* solve(int in[],int pre[], int &index, int inorderStart, int inorderEnd, int n, map<int,int> &nodeToIndex){
        
        // base case
        if(index>=n || inorderStart>inorderEnd){
            return NULL;
        }
        
        int element = pre[index++];
        Node* root = new Node(element);
        int position = nodeToIndex[element];
        
        // recursive call, here we first build the left subtree in case of Preorder and Inorder
        root->left = solve(in,pre,index,inorderStart,position-1,n,nodeToIndex);
        root->right = solve(in,pre,index,position+1,inorderEnd,n,nodeToIndex);
        
        return root;
        
    }
    
    
    Node* buildTree(int in[],int pre[], int n)
    {
        int preorderIndex = 0;
        
        map<int,int> nodeToIndex;
        createMapping(in,nodeToIndex,n);
        
        Node* ans = solve(in,pre,preorderIndex,0,n-1,n,nodeToIndex);
        return ans;
    }
};
