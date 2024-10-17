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
    size_t getRows() const;
    size_t getCols() const;
    void display();
};

template <typename T>
MatrixBase<T>::MatrixBase():
data( 1, vector<T>(1)),rows(1),cols(1)
{}

template <typename T>
MatrixBase<T>::MatrixBase(size_t _rows, size_t _cols):
data( _rows, vector<T>(_cols)),rows(_rows),cols(_cols)
{}

template <typename T>
void MatrixBase<T>::addElement(size_t x, size_t y, T element){
    data[x][y] = element;
}

template <typename T>
T MatrixBase<T>::getElement(size_t x, size_t y) const{
    return data[x][y];
}

template <typename T>
size_t MatrixBase<T>::getRows() const{
    return rows;
}

template <typename T>
size_t MatrixBase<T>::getCols() const{
    return cols;
}

template <typename T>
void MatrixBase<T>::display(){
    for (int i=0; i<rows;i++){
        for (int j=0; j<cols;j++){
            cout<<data[i][j]<<"\t";
        }
        cout<<"\n";
    }
}


#endif