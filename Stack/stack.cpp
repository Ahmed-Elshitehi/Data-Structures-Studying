#include "stack.h"

stack::stack() : head(nullptr), length(0) {
}

void stack::push(int &v) {
    node *temp = new node(v);
    temp->next = head;
    head = temp;
    length++;
}

void stack::push(int &&v) {
    node *temp = new node(v);
    temp->next = head;
    head = temp;
    length++;
}
void stack::pop() {
    node *temp = head;
    head = head->next;
    delete temp;
    length--;
}

const int &stack::top() const {
    return head->val;
}
const int &stack::size() const {
    return length;
}

bool stack::empty() const {
    return !(length);
}

stack::~stack() {
    while (!empty()) {
        pop();
    }
}
