#include <iostream>

int main() {
    int T;
    std::cin >> T; // Read the number of test cases

    for (int i = 0; i < T; ++i) {
        int N;
        std::cin >> N; // Read the weight of the pulp for the current test case

        int notebooks = (N * 1000) / 100; // Calculate the number of notebooks

        std::cout<< notebooks << std::endl;
    }

    return 0;
}