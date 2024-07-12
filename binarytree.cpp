#include <iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
class Solution{
private:
int max_sum=-2147483648;
public:
    int maxPathSum(TreeNode* root) {
        cal_pathsum(root);
        return max_sum;
    }
int cal_pathsum(TreeNode* node) {
    if (!node) 
    return 0;
    int left_max = max(0, cal_pathsum(node->left));
    int right_max = max(0, cal_pathsum(node->right));
    int current_max = node->val + (left_max > right_max ? left_max : right_max);
    int max_through_root = node->val + left_max + right_max;
    max_sum = max_sum > max(max_through_root, current_max) ? max_sum : max(max_through_root, current_max);
return current_max;
    }
};
TreeNode* newNode(int val) {
    TreeNode* node = new TreeNode(val);
    return node;
}
int main() {
    TreeNode* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    Solution sol;
    cout << sol.maxPathSum(root) << endl;
    return 0;
}
