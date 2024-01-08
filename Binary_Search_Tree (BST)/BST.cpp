
#include "BST.h"
#include <iostream>
BST::BST(int v) {
    val = v;
    left = right = nullptr;
    empty = false;
    size = 1;
}
BST::BST() {
    left = right = nullptr;
    empty = true;
    size = 0;
}

void BST::insert(int &v) {
    if (empty) {
        empty = false;
        val = v;
    } else if (v < val) {
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

BST* BST::min_element() {
    if (left) {
        return left->min_element();
    } else {
        return this;
    }
}

BST* BST::max_element() {
    if (right) {
        return right->max_element();
    } else {
        return this;
    }
}
