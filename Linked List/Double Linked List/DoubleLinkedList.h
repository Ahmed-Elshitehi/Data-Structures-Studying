#ifndef DATA_STRUCTURE_STUDYING_DOUBLELINKEDLIST_H
#define DATA_STRUCTURE_STUDYING_DOUBLELINKEDLIST_H

struct node{
    int data;
    node *next;
    node *pre;
    node(int data = 0) : data(data), next(nullptr), pre(nullptr) {
    }
    ~node(){
    }
};
class DoubleLinkedList {
private:
    node *head;
    node *tail;
    int length;
    void link(node *first, node *second);
    void RIP(node *start); // time O(N), space O(1)
public:
    DoubleLinkedList();
    void insert_front(int value); // time O(1), space O(1)
    void insert_end(int value); // time O(1), space O(1)
    void delete_front(); // time O(1), space O(1)
    void delete_end(); // time O(N), space O(1)
    node *get_at(int n);
    void delete_at(int n); // time O(N), space O(1)
    void print(); // time O(N), space O(1)
    int com(DoubleLinkedList &list); // time O(N), space O(1)
    bool operator==(DoubleLinkedList &list);
    bool operator>(DoubleLinkedList &list);
    bool operator<(DoubleLinkedList &list);
    bool operator>=(DoubleLinkedList &list);
    bool operator<=(DoubleLinkedList &list);
    ~DoubleLinkedList();
};


#endif