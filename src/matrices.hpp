#pragma once
#include <vector>

class Matrix{
private:
    int rows;
    int columns;
    std::vector<std::vector<int>> matrix;
    
public:
    Matrix(int r, int c);

    int rowGetter();
    int columnGetter();

    std::vector<int>& operator[](int index);
};

void printMatrix(const Matrix& M);

void addMatrixElements(Matrix &M);