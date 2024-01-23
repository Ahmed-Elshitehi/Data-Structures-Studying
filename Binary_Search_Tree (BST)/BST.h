
#ifndef DATA_STRUCTURES_STUDYING_BST_H
#define DATA_STRUCTURES_STUDYING_BST_H

#include <iostream>
class BST {
private:
    struct Node {
        int val;
        Node *left;
        Node *right;
        Node(int k) : val(k), left(nullptr), right(nullptr){
        }
    };
    Node *add(Node *node, int &v);
    Node *root;
public:
    BST();
    void insert(int &v);
    void insert(int &&v);
    void erase(int v);
    int FindMin(Node *node);
    int FindMax(Node *node);
    void Preorder(Node *node);
    void Inorder(Node *node);
    void Postorder(Node *node);
    Node *GetRoot();
    ~BST();
};


#endif //DATA_STRUCTURES_STUDYING_BST_H
