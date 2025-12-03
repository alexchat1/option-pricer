#include <iostream>
#include "black_scholes.hpp"
int main() {
    double S = 100.0;
    double K = 90.0;
    double T = 2.0;
    double sigma = 0.2;
    double r = 0.05;
    BlackScholes bs1(T, K, S, sigma, r);
    auto pair = bs1.run();
    std::cout << pair.first << " " << pair.second << std::endl;
    return 0;
}