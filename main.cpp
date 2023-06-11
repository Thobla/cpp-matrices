#include "SquareMatrix.cpp"
#include <iostream>
#include <string>




int main(){
    SquareMatrix matrix(4);
    std::cout << std::to_string(matrix.valueAt(3, 3)) << "\n";
    matrix.updVal(3, 3, 4);
    std::cout << matrix.valueAt(3, 3) << "\n";

};

