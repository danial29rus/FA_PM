#include <iostream>

int** createMatrix(int rows, int cols) {
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    return matrix;
}

void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}


int** addMatrices(int** matrix1, int** matrix2, int rows, int cols) {
    int** result = createMatrix(rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return result;
}

int** subtractMatrices(int** matrix1, int** matrix2, int rows, int cols) {
    int** result = createMatrix(rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
    return result;
}

int** multMatrices(int** matrix1, int** matrix2, int rows, int cols) {
    int **result = createMatrix(rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] * matrix2[i][j];
        }
    }
    return result;
}

int** transposeMatrix(int** matrix, int rows, int cols) {
    int** result = createMatrix(cols, rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = matrix[i][j];
        }
    }
    return result;
}

bool areMatricesEqual(int** matrix1, int** matrix2, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix1[i][j] != matrix2[i][j]) {
                return false;
            }
        }
    }
    return true;
}

void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows, cols;

    std::cout << "Введите количество строк и столбцов матрицы: ";
    std::cin >> rows >> cols;

    std::cout << "Введите элементы первой матрицы:\n";
    int** matrix1 = createMatrix(rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix1[i][j];
        }
    }

    std::cout << "Введите элементы второй матрицы:\n";
    int** matrix2 = createMatrix(rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix2[i][j];
        }
    }

    if (sizeof(matrix1) != sizeof(matrix2)) {
        std::cout << "Матрицы имеют разные размеры, операции сложения и вычитания невозможны." << std::endl;
    } else {
        int** sum = addMatrices(matrix1, matrix2, rows, cols);
        int** difference = subtractMatrices(matrix1, matrix2, rows, cols);
        int** mult = multMatrices(matrix1, matrix2, rows, cols);

        std::cout << "Сумма матриц:\n";
        printMatrix(sum, rows, cols);

        std::cout << "Разность матриц:\n";
        printMatrix(difference, rows, cols);

        std::cout << "Произведение матриц:\n";
        printMatrix(mult, rows, cols);

        freeMatrix(sum, rows);
        freeMatrix(difference, rows);
    }

    int** transpose = transposeMatrix(matrix1, rows, cols);
    std::cout << "Транспонированная матрица:\n";
    printMatrix(transpose, cols, rows);
    freeMatrix(transpose, cols);


    if (areMatricesEqual(matrix1, matrix2, rows, cols)) {
        std::cout << "Матрицы равны." << std::endl;
    } else {
        std::cout << "Матрицы не равны." << std::endl;
    }

    freeMatrix(matrix1, rows);
    freeMatrix(matrix2, rows);

    return 0;
}