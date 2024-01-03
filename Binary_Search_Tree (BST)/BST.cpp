
#include "BST.h"
#include <iostream>
BST::BST(int v) {
    val = v;
    left = right = nullptr;
}

void BST::insert(int &v) {
    if (v < val) {
        if (!left) {
            left = new BST(v);
        } else {
            left->insert(v);
        }
    } else if (v > val) {
        if (!right) {
            right = new BST(v);
        } else {
            right->insert(v);
        }
    }
}

void BST::insert(int &&v) {
    insert(v);
}

bool BST::find(int &v) {
    if (v == val) {
        return true;
    }
    if (v < val) {
        if (!left) {
            return false;
        } else {
            return left->find(v);
        }
    } else if (v > val) {
        if (!right) {
            return false;
        } else {
            return right->find(v);
        }
    }
    return false;
}
bool BST::find(int &&v) {
    return find(v);
}
