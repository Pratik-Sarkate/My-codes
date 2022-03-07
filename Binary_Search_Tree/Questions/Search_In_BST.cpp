// https://www.codingninjas.com/codestudio/problems/search-in-bst_1402878


/** Approach 1: Recursive solution->  TC = O(N)   SC = O(Height) **/

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    
    // base case
    if(root == NULL){
    	return false;

    }

    if(root->data == x){
    	return true;
    }

    if(root->data > x){
    	return searchInBST(root->left,x);		// search in left part
    }else{
    	return searchInBST(root->right,x);		// search in right part
    }

}


/** Approach 2: Iterative solution->  TC = O(N)   SC = O(1) **/

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    
    BinaryTreeNode<int> *temp = root;
    
    while(temp!=NULL){
        
        if(temp->data == x){
            return true;
        }
        
        if(temp->data > x){
            temp = temp->left;
        }else{
            temp = temp->right;
        } 
    }
    return false;
}