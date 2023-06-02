#include <iostream>
#include "array.h"

Array::Array(int init, int S) : Size(init), Step(S), Index(0) {
    ARR = new int[Size];
}

Array::~Array() {
    delete[] ARR;
}

void Array::showElements() const {
    for (int i = 0; i < Index; i++) {
        std::cout << ARR[i] << " ";
    }
    std::cout << std::endl;
}

void Array::expandArray(int Sizee) {
    int *temp = new int[Sizee];
    for (int i = 0; i < Size; i++) {
        temp[i] = ARR[i];
    }
    delete[] ARR;
    ARR = temp;
    Size = Sizee;
}

int Array::getSize() const {
    return Size;
}

int Array::getElemSize() const {
    return Index;
}

void Array::setValue(int val) {
    if (Index >= Size) {
        expandArray(Size + Step);
    }
    ARR[Index++] = val;
}

void Array::setArray(int *Ar, int S) {
    for (int i = 0; i < S; i++) {
        setValue(Ar[i]);
    }
}
