
#ifndef DATA_STRUCTURES_STUDYING_BST_H
#define DATA_STRUCTURES_STUDYING_BST_H


class BST {
private:
    struct node {
        int val;
        node *left;
        node *right;
        node(int k) : val(k), left(nullptr), right(nullptr){
        }
    };
    node* root;
public:
    BST();
    void insert();
    void erase(int v);
    void print();
    ~BST();
};


#endif //DATA_STRUCTURES_STUDYING_BST_H
