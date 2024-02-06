#ifndef DATA_STRUCTURES_STUDYING_MIN_HEAP_H
#define DATA_STRUCTURES_STUDYING_MIN_HEAP_H

template<typename T>
class min_heap {
private:
    T *arr;
    int size;
    int cap;
    void extend_cap();
public:
    min_heap();
};




#endif
