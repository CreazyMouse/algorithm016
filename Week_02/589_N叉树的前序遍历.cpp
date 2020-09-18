class Solution {
public:
    // 递归版
    std::vector<int> result;
    vector<int> preorder(Node* root) {        
        if(nullptr == root)
            return result;
        
        result.push_back(root->val);

        for(Node* node:root->children) {
            preorder(node);
        }

        return result;
    }
};