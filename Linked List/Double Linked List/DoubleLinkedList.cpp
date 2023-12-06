#include "DoubleLinkedList.h"
#include <iostream>
DoubleLinkedList::DoubleLinkedList() : head(nullptr), tail(nullptr), length(0) {
}

void DoubleLinkedList::link(node *first, node *second) {
    if (first)
        first->next = second;
    if (second)
        second->pre = first;
}

void DoubleLinkedList::insert_front(int value) {
    node *tmp = new node(value);
    if (!head) {
        head = tail = tmp;
    } else {
        link(tmp, head);
        head = tmp;
    }
    length++;
}

void DoubleLinkedList::insert_end(int value) {
    node *tmp = new node(value);
    if (!head) {
        head = tail = tmp;
    } else {
        link(tail, tmp);
        tail = tmp;
    }
    length++;
}

void DoubleLinkedList::delete_front() {
    if (!head) return;
    head = head->next;
    delete head->pre;
    if (head)
        head->pre = nullptr;
    length--;
    if (!length) {
        tail = nullptr;
    }
}

void DoubleLinkedList::delete_end() {
    if (!head) return;
    tail = tail->pre;
    delete tail->next;
    if (tail)
        tail->next = nullptr;
    length--;
    if (!length) {
        head = nullptr;
    }
}

void DoubleLinkedList::print() {
    node *tmp = head;
    while (tmp) {
        std::cout << tmp->data << ' ';
        tmp = tmp->next;
    }
}

node *DoubleLinkedList::get_at(int n) {
    if (n <= 0 || n > length) {
        return nullptr;
    }
    int c = 0;
    for (node *i = head; i != nullptr; i = i->next) {
        if (n == ++c) {
            return i;
        }
    }
    return nullptr;
}

void DoubleLinkedList::delete_at(int n) {
    if (n == 1) {
        delete_front();
    } else if (n == length) {
        delete_end();
    } else {
        node* temp = get_at(n); // to be deleted
        node *pre = temp->pre;
        node *nxt = temp->next;
        pre->next = nxt;
        nxt->pre = pre;
        delete temp;
        length--;
    }
}

int DoubleLinkedList::com(DoubleLinkedList &list) {
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
        head1 = head1->next;
        head2 = head2->next;
    }
    if (head1 != nullptr) {
        return -1;
    } else if (head2 != nullptr) {
        return 1;
    }
    return 0;
}

bool DoubleLinkedList::operator==(DoubleLinkedList &list) {
    return !com(list);
}

bool DoubleLinkedList::operator>(DoubleLinkedList &list) {
    return (com(list) == -1);
}

bool DoubleLinkedList::operator<(DoubleLinkedList &list)  {
    return (com(list) == 1);
}

bool DoubleLinkedList::operator>=(DoubleLinkedList &list)  {
    return (com(list) <= 0);
}

bool DoubleLinkedList::operator<=(DoubleLinkedList &list)  {
    return (com(list) >= 0);
}

void DoubleLinkedList::RIP(node *start) {
    // Rest In Peace node :)
    if (start == nullptr)return;
    RIP(start->next);
    delete start;
}

DoubleLinkedList::~DoubleLinkedList() {
    RIP(head);
}
