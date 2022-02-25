// https://practice.geeksforgeeks.org/problems/tree-from-postorder-and-inorder/1/#

/* Approach 2:  TC = O(n log(n))  SC = O(n)*/	
/* use unordered_map to reduce TC to O(n) */

void createMapping(int in[], map<int,int> &nodeToIndex, int n){
    
    for(int i = 0; i<n; i++){
        nodeToIndex[in[i]] = i;
    }
    
}

Node* solve(int in[],int post[], int &index, int inorderStart, int inorderEnd, int n, map<int,int> &nodeToIndex){
    
    // base case
    if(index<0 || inorderStart>inorderEnd){
        return NULL;
    }
    
    int element = post[index--];
    Node* root = new Node(element);
    int position = nodeToIndex[element];
    
    // recursive call, here we first build the right subtree in case of Postorder and Inorder
    root->right = solve(in,post,index,position+1,inorderEnd,n,nodeToIndex);
    root->left = solve(in,post,index,inorderStart,position-1,n,nodeToIndex);
    
    return root;
    
}

//Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int in[], int post[], int n) {
    int postorderIndex = n-1;
    
    map<int,int> nodeToIndex;
    createMapping(in,nodeToIndex,n);
    
    Node* ans = solve(in,post,postorderIndex,0,n-1,n,nodeToIndex);
    return ans;
}