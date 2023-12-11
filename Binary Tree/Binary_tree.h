#ifndef DATA_STRUCTURES_STUDYING_BINARY_TREE_H
#define DATA_STRUCTURES_STUDYING_BINARY_TREE_H

class Binary_tree {
private:
    struct node{
        int val;
        node *left;
        node *right;
        node(int v):val(v),left(nullptr),right(nullptr){
        }
        node() {
            node(0);
        }
        ~node() = default;
    };
    node root;
public:

};


#endif //DATA_STRUCTURES_STUDYING_BINARY_TREE_H
