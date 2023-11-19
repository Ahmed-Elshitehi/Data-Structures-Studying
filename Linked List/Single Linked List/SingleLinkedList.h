#ifndef DATA_STRUCTURE_STUDYING_SINGLELINKEDLIST_H
#define DATA_STRUCTURE_STUDYING_SINGLELINKEDLIST_H
#include <iostream>
struct node{
    int data;
    node *Next;
    node(int data = 0) : data(data), Next(nullptr) {
    }
    ~node(){
    }
};
class SingleLinkedList{
private:
    node *head;
    node *tail;
    int length;
    void RIP(node *start); // time O(N), space O(1)
public:
    SingleLinkedList();
    void insert_front(int value); // time O(1), space O(1)
    void insert_end(int value); // time O(1), space O(1)
    void delete_front(); // time O(1), space O(1)
    void delete_end(); // time O(N), space O(1)
    void delete_at(int n); // time O(N), space O(1)
    node *get_at(int n);
    int find(int v); // time O(N), space O(1)
    void print(); // time O(N), space O(1)
    int com(SingleLinkedList &list); // time O(N), space O(1)
    bool operator==(SingleLinkedList &list);
    bool operator>(SingleLinkedList &list);
    bool operator<(SingleLinkedList &list);
    bool operator>=(SingleLinkedList &list);
    bool operator<=(SingleLinkedList &list);
    ~SingleLinkedList();
};


#endif //DATA_STRUCTURE_STUDYING_SINGLELINKEDLIST_H
