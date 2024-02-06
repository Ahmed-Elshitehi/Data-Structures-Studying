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