/* Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    void traverse(Node* root,vector<int> &st,vector<vector<int>> &ans)
    {
        if(root==nullptr)
        {
            return;
        }
        st.push_back(root->data);
        if(root->left!=nullptr)
        {
            traverse(root->left,st,ans);
        }
        if(root->right!=nullptr)
        {
            traverse(root->right,st,ans);
        }
        if(root->left==nullptr && root->right==nullptr)
        {
            vector<int> inner;
            for(auto it:st)
            {
                inner.push_back(it);
            }
            ans.push_back(inner);
        }
        st.pop_back();
    }
    vector<vector<int>> paths(Node* root) {
        // code here
        if(root==nullptr)
        {
            return {{}};
        }
        vector<vector<int>> ans;
        vector<int> st;
        traverse(root,st,ans);
        return ans;
    }
};