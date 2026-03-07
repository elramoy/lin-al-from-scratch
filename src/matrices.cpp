#include "matrix.hpp"
#include <iostream>

class Matrix {
    int rows;
    int columns;
    std::vector<std::vector<int>> matrix;
    
public:
    Matrix(int r, int c) 
    : rows(r), columns(c), matrix(r, std::vector<int> (c)){};

    int rowGetter(){
        return rows;
    }

    int columnGetter(){
        return columns;
    }
    
    std::vector<int>& operator[](int index){
        return matrix[index];
    }
};

void printMatrix(const Matrix& M){
    for(size_t i = 0; i<M.rowGetter(); i++){
        std::cout<<"{ ";
        for(size_t j = 0; j<M.columnGetter(); j++){
            std::cout<<M[i][j]<<" ";
        }
        std::cout<<"}\n";
    }
}

void addMatrixElements(Matrix& M){
    for(size_t i = 0; i<M.rowGetter(); i++){
        for(size_t j = 0; j<M.columnGetter(); j++){
            int temp;
            std::cout<<"Enter a value for row "<<i + 1<<" and column "<<j + 1<<": ";
            std::cin>>temp;
            M[i][j] = temp;
        }
    }
}
