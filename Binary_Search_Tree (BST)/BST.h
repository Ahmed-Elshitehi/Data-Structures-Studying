
#ifndef DATA_STRUCTURES_STUDYING_BST_H
#define DATA_STRUCTURES_STUDYING_BST_H


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
public:
    BST();
    void insert(int &v);
    void insert(int &&v);
    void erase(int v);
    int FindMin(Node *node);
    int FindMax(Node *node);
    void print();
    ~BST();
};


#endif //DATA_STRUCTURES_STUDYING_BST_H
