#include <iostream>
#include <queue>
#include <string>
using namespace std;
struct TreeNode {
    int value;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : value(val), left(nullptr), right(nullptr) {}
};
class TreeSerializer {
public:
    string encode(TreeNode* root) {
        string serialized;
        encodeHelper(root, serialized);
        return serialized;
    }
    TreeNode* decode(string data) {
        int index = 0;
        return decodeHelper(data, index);
    }
private:
    void encodeHelper(TreeNode* node, string& result) {
        if (!node) {
            result += "# ";
            return;
        }
        result += to_string(node->value) + " ";
        encodeHelper(node->left, result);
        encodeHelper(node->right, result);
    }
    TreeNode* decodeHelper(string& data, int& index) {
        if (data[index] == '#') {
            index += 2;
            return nullptr;
        }
        int start = index;
        while (data[index] != ' ') {
            index++;
        }
        int value = stoi(data.substr(start, index - start));
        index++;
        TreeNode* node = new TreeNode(value);
        node->left = decodeHelper(data, index);
        node->right = decodeHelper(data, index);
        return node;
    }
};
void printTree(TreeNode* root) {
    if (!root) return;
    cout << root->value << " ";
    printTree(root->left);
    printTree(root->right);
}
int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);
    TreeSerializer codec;
    string serialized = codec.encode(root);
    cout << "Serialized tree: " << serialized << endl;
    TreeNode* deserialized = codec.decode(serialized);
    cout << "Deserialized tree: ";
    printTree(deserialized);
    cout << endl;
    return 0;
}
