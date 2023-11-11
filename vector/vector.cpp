#include <iostream>
using namespace std;
class vector{
private:
    int *arr = nullptr;
    int size, capacity;
public:
    vector(int n = 0, int v = 0) : size(max(0, n)), capacity(max(0, n)) {
        arr = new int[capacity];
        for (int i = 0; i < size; ++i) {
            arr[i] = v;
        }
    }

    void expand_capacity() {
        capacity = capacity * 2;
        capacity = max(capacity, 1);
        int *new_arr = new int[capacity];
        for (int i = 0; i < size; i++) {
            new_arr[i] = arr[i];
        }
        swap(arr, new_arr);
        delete[] new_arr;
    }
    void push_back(int value){
        if (size == capacity)
            expand_capacity();
        arr[size++] = value;
    }
    int at(int i) {
        if (i >= size) {
            return -1;
        } else {
            return arr[i];
        }
    }
    int& operator[](int i){
        return arr[i];
    }
    int front(){
        return at(0);
    }
    int back(){
        return at(size - 1);
    }
    void print(){
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }
};