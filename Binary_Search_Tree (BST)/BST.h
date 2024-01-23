
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
    Node *root;
    Node *add(Node *node, int &v);
    Node *_delete(Node *node, int &v);
    Node *_Min(Node *node);
    Node *_Max(Node *node);
public:
    BST();
    void insert(int &v);
    void insert(int &&v);
    void erase(int &v);
    void erase(int &&v);
    int FindMin();
    int FindMax();
    void Preorder(Node *node);
    void Inorder(Node *node);
    void Postorder(Node *node);
    Node *GetRoot();
    ~BST();
};


#endif //DATA_STRUCTURES_STUDYING_BST_H
