
#ifndef DATA_STRUCTURES_STUDYING_BST_H
#define DATA_STRUCTURES_STUDYING_BST_H


class BST {

private:
    int val;
    BST *left;
    BST *right;
    bool empty;
    int size;
public:
    BST(int v);
    BST();
    void insert(int &v);
    void insert(int &&v);
    bool find(int &v);
    bool find(int &&v);
    BST* min_element();
    BST* max_element();
    int get_val(){
        return val;
    }
};


#endif //DATA_STRUCTURES_STUDYING_BST_H
