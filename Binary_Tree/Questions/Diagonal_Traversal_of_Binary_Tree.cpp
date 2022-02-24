// https://practice.geeksforgeeks.org/problems/diagonal-traversal-of-binary-tree/1/#


/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */



/** Approach: TC = O(n)  SC = O(n) **/


vector<int> diagonal(Node *root)
{
    vector<int> ans;
    if(root==NULL) return ans;
    
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        Node* frontNode = q.front();
        q.pop();
        
        while(frontNode){
            ans.push_back(frontNode->data);
            
            if(frontNode->left){
                q.push(frontNode->left);
            }
            
            frontNode = frontNode->right;
        }
    }
    
    return ans;
} 