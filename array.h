#ifndef ARRAY_H
#define ARRAY_H

class Array {
public:
    Array(int initialSize = 10, int step = 2);
    ~Array();

    void showElements() const;
    void expandArray(int size);
    int getSize() const;
    int getElemSize() const;
    void setValue(int val);
    void setArray(int *pArr, int size);

private:
    int Size;
    int Step;
    int Index;
    int *ARR;
};

#endif // ARRAY_H
