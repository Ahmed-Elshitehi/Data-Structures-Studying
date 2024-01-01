
#include "BST.h"

BST::BST() : root(nullptr) {

}

void BST::insert(int v) {
    TreeNode *p = root;
    TreeNode *tmp = new TreeNode(v);
    while (p) {
        if (p->val > v) {
            p = p->right;
        } else if (p->val < v) {
            p = p->right;
        } else {
            return;
        }
    }
    p = tmp;
}
