#include <iostream>

int main() {
    int n = 8; // Number of rows in the pattern

    for (int i = 1; i <= n; i++) {

        for (int k = 1; k <= i; k++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
