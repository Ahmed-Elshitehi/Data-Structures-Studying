//
// Created by elshi on 11/12/2023.
//

#ifndef DATA_STRUCTURE_STUDYING_VECTOR_H
#define DATA_STRUCTURE_STUDYING_VECTOR_H


class vector {
private:
    int *arr = nullptr;
    int size, capacity;
    void expand_capacity();
public:
    vector(int, int);
    vector(int);
    vector();
    void push_back(int value);
    int at(int i);
    int &operator[](int i);
    const int front();
    const int back();
    void print();
};


#endif //DATA_STRUCTURE_STUDYING_VECTOR_H