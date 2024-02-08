#ifndef DATA_STRUCTURES_STUDYING_MIN_HEAP_H
#define DATA_STRUCTURES_STUDYING_MIN_HEAP_H

template<typename T>
class min_heap {
private:
    T *arr;
    int size;
    int cap;
    void extend_cap();
    int get_parent(int pos);
    int get_left_child(int pos);
    int get_right_child(int pos);
    void heapify_up(int ch_pos);
    void heapify_down(int parent_pos);
public:
    min_heap();
    const int &top() const;
    void pop();
    void push(int &v);
    void push(int &&v);
    bool empty();
};



#endif
