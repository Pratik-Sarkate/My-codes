// https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1


/** Approach:  TC = O(N)  SC = O(N)  **/


class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        vector<int> ans;
        
        // base case
        if(root==NULL){
            return ans;
        }
        
        map<int,map<int,vector<int>>> nodes;    // hd,lvl,vector of values
        
        queue<pair<Node*,pair<int,int>>> q; // node , hd, lvl
        q.push(make_pair(root,make_pair(0,0)));
        
        while(!q.empty()){
            pair<Node*,pair<int,int>> temp = q.front();
            q.pop();
            
            Node* frontNode = temp.first;
            int hd = temp.second.first;  // horizontal distance
            int lvl = temp.second.second;   //level
            
            nodes[hd][lvl].push_back(frontNode->data);
            
            if(frontNode->left){
                q.push(make_pair(frontNode->left,make_pair(hd-1,lvl+1)));
            }
            
            if(frontNode->right){
                q.push(make_pair(frontNode->right,make_pair(hd+1,lvl+1)));
            }
        }
        
        for(auto i: nodes){
            for(auto j: i.second){ // going into map
                for(auto k: j.second){ // going into vector
                    ans.push_back(k);
                }
            }
        }
        
        return ans;
    }
};