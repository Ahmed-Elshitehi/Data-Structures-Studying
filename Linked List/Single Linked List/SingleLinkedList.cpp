#include "SingleLinkedList.h"

SingleLinkedList::SingleLinkedList() :
        head(nullptr), tail(nullptr), length(0) {
}

void SingleLinkedList::insert_front(int value) { // time O(1), space O(1)
    node *temp = new node(value);
    if (head == nullptr) { // the first node in my linked list
        head = tail = temp;
    } else {
        temp->Next = head;
        head = temp;
    }
    length++;
}

void SingleLinkedList:: insert_end(int value) {// time O(1), space O(1)
    node *temp = new node(value);
    if (head == nullptr) { // the first node in my linked list
        head = tail = temp;
    } else {
        tail->Next = temp;
        tail = temp;
    }
    length++;
}

void SingleLinkedList::delete_front(){ // time O(1), space O(1)
    if (head) { // not empty
        node *temp = head;// to be deleted
        head = head->Next;
        delete temp;
        length--;
        if (head == nullptr) {
            tail = head;
        }
    }
}

void SingleLinkedList::delete_end(){ // time O(N), space O(1)
    if (length <= 1) {
        delete_front();
    } else {
        node *temp = tail;// to be deleted
        node *pre = get_at(length - 1);
        tail = pre;
        delete temp;
    }
}

void SingleLinkedList::delete_at(int n){ // time O(N), space O(1)
    if (n == 1) {
        delete_front();
    } else if (n == length) {
        delete_end();
    }
    node* temp = get_at(n); // to be deleted
    node* prev = get_at(n - 1);
    prev->Next = temp->Next;
    delete temp;
    length--;
}

node *SingleLinkedList::get_at(int n) { // time O(N), space O(1)
    if (n <= 0 || n > length) {
        return nullptr;
    }
    int c = 0;
    for (node *i = head; i != nullptr; i = i->Next) {
        if (n == ++c) {
            return i;
        }
    }
    return nullptr;
}

int SingleLinkedList::find(int v) {// time O(N), space O(1)
    int c = 1;
    for (node *i = head; i != nullptr; i = i->Next, c++) {
        if (v == i->data) {
            return c;
        }
    }
    return -1;
}

void SingleLinkedList::print() {// time O(N), space O(1)
    for (node *i = head; i != nullptr; i = i->Next) {
        std::cout << i->data << ' ';
    }
}

int SingleLinkedList::com(SingleLinkedList &list) {
    // time O(N), space O(1)
    //  1 --> 1 < 2, 0 --> 1 = 2, -1 --> 1 > 2
    node *head1 = head;
    node *head2 = list.head;
    while (head1 != nullptr && head2 != nullptr) {
        if (head1->data < head2->data) {
            return 1;
        } else if (head1->data > head2->data) {
            return -1;
        }
        head1 = head1->Next;
        head2 = head2->Next;
    }
    if (head1 != nullptr) {
        return -1;
    } else if (head2 != nullptr) {
        return 1;
    }
    return 0;
}

bool SingleLinkedList::operator==(SingleLinkedList &list) {
    return !com(list);
}

bool SingleLinkedList::operator>(SingleLinkedList &list) {
    return (com(list) == -1);
}

bool SingleLinkedList::operator<(SingleLinkedList &list)  {
    return (com(list) == 1);
}

bool SingleLinkedList::operator>=(SingleLinkedList &list)  {
    return (com(list) <= 0);
}

bool SingleLinkedList::operator<=(SingleLinkedList &list)  {
    return (com(list) >= 0);
}

void SingleLinkedList::RIP(node *start) { // time O(N), space O(1)
    // Rest In Peace node :)
    if (start == nullptr)return;
    RIP(start->Next);
    delete start;
}

SingleLinkedList::~SingleLinkedList() {
    RIP(head);
}
