/**
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
    void solution(TreeNode* root, vector<int>& res) {
        if (root) { // 현재 노드가 null이 아닐 때만 진행
            solution(root->left, res); // 왼쪽 서브트리 탐색
            solution(root->right, res); // 오른쪽 서브트리 탐색
            res.push_back(root->val); // 현재 노드의 값을 결과 벡터에 추가
        }
    }

    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res; // 결과를 저장할 벡터
        solution(root, res); // 재귀 호출로 후위 순회 수행
        return res; // 결과 반환
    }
};
