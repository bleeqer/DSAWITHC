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
    vector<int> preorderTraversal(TreeNode* root) {
        if (root == NULL) { // 트리가 비어있으면 빈 벡터 반환
            return {};
        }

        vector<int> result;

        result.push_back(root->val); // 현재 노드 값 추가
        vector<int> left = preorderTraversal(root->left); // 왼쪽 서브트리 탐색
        vector<int> right = preorderTraversal(root->right); // 오른쪽 서브트리 탐색

        for (int i = 0; i < left.size(); i++) { // 왼쪽 서브트리 결과 추가
            result.push_back(left[i]);
        }
        
        for (int i = 0; i < right.size(); i++) { // 오른쪽 서브트리 결과 추가
            result.push_back(right[i]);
        }
        
        return result; // 결과 반환
    }
};
