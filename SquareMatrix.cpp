#include "matrix.h"
#include <iostream>

class SquareMatrix : protected mtx::SquareMatrix{
    public:
        int n = 5;
        int m = 5;
        std::vector<std::vector<int>> matrix;
        SquareMatrix(int k){
                n = k;
                m = k;
                initMatrix();
                
            }
        void updVal(int i, int j, int val){
            matrix[i][j] = val;
        }
        int valueAt(int i, int j){
            return matrix[i][j];
        }
    private:
        void initMatrix(){
            
            for(int i = 0; i < n; i+=1){
                matrix.push_back(std::vector<int>(n, 0));
            }
        }
        
        
        

};