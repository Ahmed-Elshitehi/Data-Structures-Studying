#include "BST.h"

BST::BST() : root(nullptr) {
}

void BST::insert(int &v) {
    root = add(root, v);
}

void BST::insert(int &&v) {
    insert(v);
}

BST::Node *BST::add(Node *node, int &v) {
    if (!node) {
        node = new Node(v);
    } else if (node->val >= v) {
        node->left = add(node->left, v);
    } else {
        node->right = add(node->right, v);
    }
    return node;
}
