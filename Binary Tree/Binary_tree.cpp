#include "Binary_tree.h"
Binary_tree::Binary_tree() : root(nullptr) {
}
void Binary_tree::print_rec(TreeNode *p) {
    if (!p) {
        return;
    }
    print_rec(p->left);
    cout << p->val << '\n';
    print_rec(p->right);
}

void Binary_tree::add(vector<int> &nums, string &s) {
    int n = nums.size();
    if (!root) {
        root = new TreeNode();
    }
    root->val = nums[0];
    TreeNode *cur = root;
    for (int i = 1; i < n; ++i) {
        if (s[i - 1] == 'L') {
            if (!cur->left) {
                cur->left = new TreeNode();
            }
            cur = cur->left;
        } else if (s[i - 1] == 'R') {
            if (!cur->right) {
                cur->right = new TreeNode();
            }
            cur = cur->right;
        }
        cur->val = nums[i];
    }
}

void Binary_tree::print() {
    print_rec(root);
}

void Binary_tree::dfs(Binary_tree::TreeNode *node) {
    // here we can traverse all the tree
    if (!node) {
        return;
    }
    dfs(node->left);
    dfs(node->right);
}

void Binary_tree::bfs(Binary_tree::TreeNode *node) {
    // here we can traverse all the tree
    queue<TreeNode *> queue;
    queue.push(node);
    queue.push(node);
    while (!queue.empty()) {
        TreeNode *p = queue.front();
        queue.pop();
        if (!p) continue;
        queue.push(p->left);
        queue.push(p->right);
    }
}
