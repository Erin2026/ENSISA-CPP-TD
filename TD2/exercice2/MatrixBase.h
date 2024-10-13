#ifndef MATRIXBASE_H
#define MATRIXBASE_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

template <typename T>
class MatrixBase
{
protected:
    vector<vector<T>> data;
    size_t rows;
    size_t cols;
public:
    MatrixBase();
    MatrixBase(size_t _rows, size_t _cols);
    
    void addElement(size_t x, size_t y, T element);
    T getElement(size_t x, size_t y) const;
    T getRows(size_t y) const;
    T getCols(size_t x) const;
    void display() const;
}

template <typename T>
MatrixBase<T>::addElement(size_t x, size_t y, T element){
    
}

#endif