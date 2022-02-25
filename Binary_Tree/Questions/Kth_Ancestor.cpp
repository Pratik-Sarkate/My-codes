// https://practice.geeksforgeeks.org/problems/kth-ancestor-in-a-tree/1/#

/** Approach 1:  TC = O(n)   SC = O(n)  **/

Node* solve(Node* root, int &k, int node){
    
    // base case
    if(root==NULL){
        return NULL;
    }
    
    if(root->data==node){
        return root;
    }
    
    Node* leftAns = solve(root->left,k,node);
    
    Node* rightAns = solve(root->right,k,node);
    
    
    if(leftAns!=NULL && rightAns==NULL){
        k--;
        if(k<=0){
            // ans locked
            k = INT_MAX;
            return root;
        }
        
        return leftAns;
    }
    
    if(leftAns==NULL && rightAns!=NULL){
        k--;
        if(k<=0){
            // ans locked
            k = INT_MAX;
            return root;
        }
        
        return rightAns;
    }
    
    return NULL;
    
    /* Shorter way to write above if conditions */
    
    // if(leftAns!=NULL || rightAns!=NULL){
    //     k--;
    //     if(k<=0){
    //         k = INT_MAX;
    //         return root;
    //     }
        
    //     return (leftAns)? leftAns:rightAns;
    // }
    
    // return NULL;
}

int kthAncestor(Node *root, int k, int node)
{
    Node* ans = solve(root,k,node);

    if(ans==NULL || ans->data==node) return -1;
    else return ans->data;
}


/** Approach 2:  TC = O(n^2)   SC = O(n)  **/

/* Traverse all the paths and Store the path in a vector (push,pop) till the
   element is found, once found, find the kth element from the last in the
   vector and store this and return*/