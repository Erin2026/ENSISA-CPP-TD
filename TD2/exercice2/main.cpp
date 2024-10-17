#include "MatrixNumerical.h"

int main(){
    MatrixNumerical<int> matrix1 = MatrixNumerical<int>(3,3);
    matrix1.addElement(1,1,3);
    MatrixNumerical<int> matrix2 = MatrixNumerical<int>(4,5);
    matrix2.addElement(1,1,2);
    matrix1.display();
    matrix2.display();
    cout<<matrix1.getCols()<<'\n';
    cout<<matrix2.getCols()<<'\n';
    return 0;

}