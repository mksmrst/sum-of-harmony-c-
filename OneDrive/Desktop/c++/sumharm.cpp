#include <iostream>

int main() {
    int N = 1000000;
    float sum1 = 0.0f;
    for (int i = 1; i <= N; i++) {
        sum1 = sum1 + 1.0f/i;
    }

    float sum2 = 0.0f;
    for (int i = N; i >= 1; i--) {
        sum2 = sum2 + 1.0f/i;
    }

    std::cout << "Вывод суммы в последовательности от меньшего к большему при N = 1 000 000: " << sum1 << std::endl;
    std::cout << "Вывод суммы в последовательности от большего к меньшему при N = 1 000 000: " << sum2 << std::endl;

    int N1 = 10000000;
    float sum3 = 0.0f;
    for (int i = 1; i <= N1; i++) {
        sum3 = sum3 + 1.0f/i;
    }

    float sum4 = 0.0f;
    for (int i = N1; i >= 1; i--) {
        sum4 = sum4 + 1.0f/i;
    }

    std::cout << "Вывод суммы в последовательности от меньшего к большему при N = 10 000 000: " << sum3 << std::endl;
    std::cout << "Вывод суммы в последовательности от большего к меньшему при N = 10 000 000: " << sum4 << std::endl;

    int N2 = 100000000;
    float sum5 = 0.0f;
    for (int i = 1; i <= N2; i++) {
        sum5 = sum5 + 1.0f/i;
    }

    float sum6 = 0.0f;
    for (int i = N2; i >= 1; i--) {
        sum6 = sum6 + 1.0f/i;
    }

    std::cout << "Вывод суммы в последовательности от меньшего к большему при N = 100 000 000: " << sum5 << std::endl;
    std::cout << "Вывод суммы в последовательности от большего к меньшему при N = 100 000 000: " << sum6 << std::endl;

    return 0;
}