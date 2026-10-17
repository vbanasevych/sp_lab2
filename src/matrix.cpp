#include <iostream>
#include <vector>

const int SIZE = 1500;

void multiplyMatrices(const std::vector<std::vector<double>>& A,
                      const std::vector<std::vector<double>>& B,
                      std::vector<std::vector<double>>& C) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            C[i][j] = 0;
            for (int k = 0; k < SIZE; ++k) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    std::cout << "Starting matrix multiplication " << std::endl;

    std::vector<std::vector<double>> A(SIZE, std::vector<double>(SIZE, 1.5));
    std::vector<std::vector<double>> B(SIZE, std::vector<double>(SIZE, 2.5));
    std::vector<std::vector<double>> C(SIZE, std::vector<double>(SIZE, 0.0));

    multiplyMatrices(A, B, C);

    std::cout << "Done. Verification: " << C[0][0] << std::endl;
    return 0;
}
