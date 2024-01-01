
#ifndef DATA_STRUCTURES_STUDYING_BST_H
#define DATA_STRUCTURES_STUDYING_BST_H


class BST {

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
public:
    BST();
    void insert(int v);
    void insert(int &v);
};


#endif //DATA_STRUCTURES_STUDYING_BST_H
