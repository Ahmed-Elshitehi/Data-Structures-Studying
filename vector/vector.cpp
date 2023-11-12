//
// Created by elshi on 11/12/2023.
//

#include "vector.h"
#include <iostream>
using namespace std;

vector::vector(int n, int v) : size(max(0, n)), capacity(max(0, n)) {
    arr = new int[capacity];
    for (int i = 0; i < size; ++i) {
        arr[i] = v;
    }
}
vector::vector() : vector(0, 0) {
}
vector::vector(int n) : vector(n, 0) {
}

void vector::expand_capacity() {
    capacity = capacity * 2;
    capacity = max(capacity, 1);
    int *new_arr = new int[capacity];
    for (int i = 0; i < size; i++) {
        new_arr[i] = arr[i];
    }
    swap(arr, new_arr);
    delete[] new_arr;
}

void vector::push_back(int value) {
        if (size == capacity)
            expand_capacity();
    arr[size++] = value;
}

int vector::at(int i) {
    if (i >= size) {
        return -1;
    } else {
        return arr[i];
    }
}
int &vector::operator[](int i) {
    return arr[i];
}

const int vector::front() {
    return arr[0];
}
const int vector::back() {
    return arr[size - 1];
}

void vector::print() {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << ' ';
    }
}
void vector::insert(int value, int idx) {
    if (size == capacity) {
        expand_capacity();
    }
    // if idx > size so this value will be in the end in my vector
    arr[size++] = value;
    for (int i = size - 2; i >= idx; i--) {
        swap(arr[i], arr[i + 1]);
    }
}

void vector::erase(int idx) {
    if (idx >= size) return;

    size--;
    for (int i = idx; i < size; ++i) {
        arr[i] = arr[i + 1];
    }
}
