
#ifndef DATA_STRUCTURES_STUDYING_BST_H
#define DATA_STRUCTURES_STUDYING_BST_H


class BST {

private:
    int val;
    BST *left;
    BST *right;
public:
    BST(int v);
    void insert(int &v);
    void insert(int &&v);
    bool find(int &v);
    bool find(int &&v);
    BST* min_element();
    BST* max_element();
};


#endif //DATA_STRUCTURES_STUDYING_BST_H
