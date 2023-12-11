#ifndef DATA_STRUCTURES_STUDYING_STACK_H
#define DATA_STRUCTURES_STUDYING_STACK_H
class stack {
private:
    struct node{
        int val;
        node* next;
        node(int v):val(v),next(nullptr){
        }
        node() {
            node(0);
        }
        ~node()= default;
    };
    node *head;
    int length;
public:
    stack();
    void push(int &v);
    void push(int &&v);
    void pop();
    const int &top() const;
    const int &size() const;
    bool empty() const;
    ~stack();
};

#endif //DATA_STRUCTURES_STUDYING_STACK_H
