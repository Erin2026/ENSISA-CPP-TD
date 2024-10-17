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

    /*friend T getDeterminant(const MatrixNumerical<T> Matrix);
    MatrixNumerical<T> getSmaller(); /*besoin pour getDeterminant*/ 
};

template<typename T>
MatrixNumerical<T>::MatrixNumerical()
{
}

template<typename T>
MatrixNumerical<T>::MatrixNumerical(size_t _rows, size_t _cols):MatrixBase<T>(_rows,_cols){

}
/*
template<typename T>
T MatrixNumerical<T>::getSmaller(t_size i){
    MatrixNumerical<int> newMatrix = MatrixNumerical<int>(this.rows-1,this.cols-1)
    for (int j=0;j<this;j++){}
}

---> besoin de getSmaller pour la fonction récursive getDeterminant (elle permettra de calculer la matrice d'ordre n-1 pour que getDeterminant en calcule le déterminant.)
*/

/*
template<typename T>
T MatrixNumerical<T>::getDeterminant(const MatrixNumerical<T> Matrix){
    int det=0;
    int power=1;
    if (Matrix.cols==Matrix.rows){
        for (int i; i<Matrix.cols;i++);{
            det+=det + -1*power*this.data[0][i]*getDeterminant(Matrix.getSmaller(i))
            power=-power;
        }

    }else{
        cout<<"on ne peut pas calculer le déterminant d'une matrice qui n'est pas carrée."
    }
}

---> erreurs de templates et de types
*/


#endif
