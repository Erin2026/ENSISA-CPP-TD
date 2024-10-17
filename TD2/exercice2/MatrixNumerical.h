#ifndef MATRIXNUMERICAL_H
#define MATRIXNUMERICAL_H

#include <iostream>
#include <string>
#include <vector>
#include "MatrixBase.h"
using namespace std;

template<typename T>
class MatrixNumerical : public MatrixBase<T>
{
public:
    MatrixNumerical();
    MatrixNumerical(size_t _rows, size_t _cols);
};

template<typename T>
MatrixNumerical<T>::MatrixNumerical()
{
}

template<typename T>
MatrixNumerical<T>::MatrixNumerical(size_t _rows, size_t _cols):MatrixBase<T>(_rows,_cols){

}

#endif
