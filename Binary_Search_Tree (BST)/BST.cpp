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

BST::Node *BST::_Min(Node *node) {
    if (node->left) {
        return _Min(node->left);
    } else {
        return node;
    }
}
BST::Node *BST::_Max(Node *node) {
    if (node->left) {
        return _Max(node->left);
    } else {
        return node;
    }
}

int BST::FindMin() {
    return _Min(root)->val;
}

int BST::FindMax() {
    return _Max(root)->val;
}

void BST::Preorder(BST::Node *node) {
    if (!node)
        return;
    std::cout << node->val << ' ';
    Preorder(node->left);
    Preorder(node->right);
}

void BST::Inorder(BST::Node *node) {
    if (!node)
        return;
    Inorder(node->left);
    std::cout << node->val << ' ';
    Inorder(node->right);
}

void BST::Postorder(BST::Node *node) {
    if (!node)
        return;
    Postorder(node->left);
    Postorder(node->right);
    std::cout << node->val << ' ';
}

BST::Node *BST::GetRoot() {
    return root;
}

BST::~BST() {
    std::cout << "\nEND\n";
}

BST::Node *BST::_delete(BST::Node *node, int &v) {
    if (!node) {
        return node;
    } else if (v > node->val) {
        node->right = _delete(node->right, v);
    } else if (v < node->val) {
        node->left = _delete(node->left, v);
    } else {
        if (!node->left && !node->right) {
            delete node;
            node = nullptr;
        } else if (!node->left) {
            Node *temp = node;
            node = node->right;
            delete temp;
        } else if (!node->right) {
            Node *temp = node;
            node = node->left;
            delete temp;
        } else {
            Node *temp = _Min(node->right);
            node->val = temp->val;
            node->right = _delete(node->right, temp->val);
        }
    }
    return node;
}

void BST::erase(int &v) {
    root = _delete(root, v);
}
void BST::erase(int &&v) {
    erase(v);
}
