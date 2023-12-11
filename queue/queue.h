#ifndef DATA_STRUCTURES_STUDYING_QUEUE_H
#define DATA_STRUCTURES_STUDYING_QUEUE_H
class queue {
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
    node *tail;
    int length;
public:
    queue();
    void push(int &v);
    void push(int &&v);
    void pop();
    const int& front() const;
    const int& back() const;
    const int& size() const;
    bool empty() const;
    ~queue();
};


#endif //DATA_STRUCTURES_STUDYING_QUEUE_H
