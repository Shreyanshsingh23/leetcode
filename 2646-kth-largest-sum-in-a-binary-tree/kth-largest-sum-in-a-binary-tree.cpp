/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        priority_queue<long long> pq;
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            long long sum =0;

            long  long size = q.size();
           for(long long i = 0; i< size; ++i){
             TreeNode* currNode = q.front();
             sum += currNode->val;
            q.pop();
            if(currNode->left != NULL) q.push(currNode->left);
            if(currNode->right != NULL) q.push(currNode->right);
           }

           pq.push(sum);
            
        }
        
        if(pq.size() < k){
            return -1;
        }
        k--;
        while(k--){
            pq.pop();
        }

        return pq.top();
    }
};