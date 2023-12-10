#include <iostream>
#include <vector>
#include <stdexcept>

class Matrix {
private:
    std::vector<std::vector<int>> data;

public:
    Matrix(int rows, int cols) : data(rows, std::vector<int>(cols, 0)) {}

    Matrix(const std::vector<std::vector<int>>& d) : data(d) {}

    int getRows() const { return data.size(); }
    int getCols() const { return data[0].size(); }

    std::vector<int>& operator[](int row) { return data[row]; }
    const std::vector<int>& operator[](int row) const { return data[row]; }

    // Сложение матриц
    Matrix operator+(const Matrix& other) const;
    // Вычитание матриц
    Matrix operator-(const Matrix& other) const;
    // Умножение на число
    Matrix operator*(int scalar) const;
    // Произведение матриц
    Matrix operator*(const Matrix& other) const;
    // Транспонирование
    Matrix transpose() const;
    // Возведение в степень
    Matrix power(int n) const;
};

Matrix Matrix::operator+(const Matrix& other) const {

    Matrix result = *this;
    for (int i = 0; i < getRows(); ++i) {
        for (int j = 0; j < getCols(); ++j) {
            result[i][j] += other[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator-(const Matrix& other) const {

    Matrix result = *this;
    for (int i = 0; i < getRows(); ++i) {
        for (int j = 0; j < getCols(); ++j) {
            result[i][j] -= other[i][j];
        }
    }
    return result;
}

Matrix Matrix::operator*(int scalar) const {
    Matrix result = *this;
    for (int i = 0; i < getRows(); ++i) {
        for (int j = 0; j < getCols(); ++j) {
            result[i][j] *= scalar;
        }
    }
    return result;
}

Matrix Matrix::operator*(const Matrix& other) const {
    int rows = this->getRows(), cols = other.getCols(), inner = this->getCols();
    Matrix result(rows, cols);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            for (int k = 0; k < inner; ++k) {
                result[i][j] += (*this)[i][k] * other[k][j];
            }
        }
    }
    return result;
}

Matrix Matrix::transpose() const {
    int rows = getRows(), cols = getCols();
    Matrix result(cols, rows);
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[j][i] = (*this)[i][j];
        }
    }
    return result;
}

Matrix Matrix::power(int n) const {


    Matrix result = *this;
    Matrix temp = *this;
    for (int i = 1; i < n; ++i) {
        result = result * temp;
    }

    return result;
}
