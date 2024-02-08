#include <cassert>
#include "min_heap.h"

template<typename T>
min_heap<T>::min_heap():size(0), cap(0), arr(nullptr) {

}

template<typename T>
void min_heap<T>::extend_cap() {
    cap *= 2;
    cap += 1;
    T *cur = new T[cap];
    for (int i = 0; i < size; i++)
        cur[i] = arr[i];
    swap(cur, arr);
    delete[]cur;
}

template<typename T>
bool min_heap<T>::empty() {
    return size == 0;
}

template<typename T>
const int &min_heap<T>::top() const {
    assert(size);
}


template<typename T>
int min_heap<T>::get_parent(int pos) {
    if (pos == 0) {
        return -1;
    }
    return (pos - 1) / 2;
}

template<typename T>
int min_heap<T>::get_left_child(int pos) {
    int child_pos = pos * 2 + 1;
    if (child_pos > size - 1) {
        return -1;
    }
    return child_pos;
}

template<typename T>
int min_heap<T>::get_right_child(int pos) {
    int child_pos = pos * 2 + 2;
    if (child_pos > size - 1) {
        return -1;
    }
    return child_pos;
}

template<typename T>
void min_heap<T>::heapify_up(int ch_pos) {
    int parent_pos = get_parent(ch_pos);
    if (parent_pos == -1 || arr[parent_pos] < arr[ch_pos]) {
        return;
    }
    swap(arr[parent_pos], arr[ch_pos]);
    heapify_up(parent_pos);
}

template<typename T>
void min_heap<T>::push(int &v) {
    if (size == cap) extend_cap();
    arr[size++] = v;
    heapify_up(size - 1);
}

template<typename T>
void min_heap<T>::push(int &&v) {
    push(v);
}