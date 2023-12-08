#include "queue.h"

queue::queue() : head(nullptr), tail(nullptr), length(0) {
}

void queue::push(int &v) {
    node *temp = new node(v);
    if (head == nullptr) {
        head = tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
    length++;
}

void queue::push(int &&v) {
    node *temp = new node(v);
    if (head == nullptr) {
        head = tail = temp;
    } else {
        tail->next = temp;
        tail = temp;
    }
    length++;
}

void queue::pop() {
    node *temp = head;
    head = head->next;
    delete temp;
    length--;
    if (!length) {
        tail = nullptr;
    }
}

const int &queue::front() const {
    return head->val;
}

const int &queue::back() const {
    return tail->val;
}

const int &queue::size() const {
    return length;
}

bool queue::empty() const {
    return (!length);
}

queue::~queue() {
    while (!empty()) {
        pop();
    }
}

