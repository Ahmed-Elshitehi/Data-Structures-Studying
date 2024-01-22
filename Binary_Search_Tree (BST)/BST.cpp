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

int BST::FindMin(BST::Node *node) {
    if (node->left) {
        return FindMin(node->left);
    } else {
        return node->val;
    }
}

int BST::FindMax(BST::Node *node) {
    if (node->right) {
        return FindMin(node->right);
    } else {
        return node->val;
    }
}
