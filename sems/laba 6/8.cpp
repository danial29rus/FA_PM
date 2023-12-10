#include <iostream>
#include <vector>

class MatrixTransformer {
private:
    std::vector<std::vector<int>> matrix;

public:

    void fillMatrix(const std::vector<std::vector<int>>& values) {
        matrix = values;
    }


    void transformRowsToColumns() {
        if (matrix.empty()) return;

        int rows = matrix.size();
        int cols = matrix[0].size();

        std::vector<std::vector<int>> transposed(cols, std::vector<int>(rows));

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                transposed[j][i] = matrix[i][j];
            }
        }

        matrix = transposed;
    }


    void displayMatrix() const {
        for (const auto& row : matrix) {
            for (int val : row) {
                std::cout << val << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    MatrixTransformer transformer;


    transformer.fillMatrix({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}});
    std::cout << "Original matrix:\n";
    transformer.displayMatrix();


    transformer.transformRowsToColumns();
    std::cout << "\nTransformed matrix:\n";
    transformer.displayMatrix();

    return 0;
}
