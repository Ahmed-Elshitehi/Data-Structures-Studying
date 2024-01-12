#ifndef DATA_STRUCTURES_STUDYING_BINARY_TREE_H
#define DATA_STRUCTURES_STUDYING_BINARY_TREE_H
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Binary_tree {
private:
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr) {
        }
        TreeNode(int x) : val(x), left(nullptr), right(nullptr) {
        }
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {
        }
    };
    TreeNode *root;
    void print_rec(TreeNode *p);
    void killer(TreeNode *node);
public:
    Binary_tree();
    void print();
    void add(vector<int> &nums, string &s);
    void dfs(TreeNode *node);
    void bfs(TreeNode *node);
    ~Binary_tree();
};


#endif //DATA_STRUCTURES_STUDYING_BINARY_TREE_H
