#pragma once
#include <utility>
class BlackScholes {
public:
    BlackScholes(double timeToMaturity, double strike, double currentPrice, double volatility, double interestRate)
        : timeToMaturity_(timeToMaturity), strike_(strike), currentPrice_(currentPrice), volatility_(volatility), interestRate_(interestRate) {}

    std::pair<double, double> run();

private:
    double timeToMaturity_;
    double strike_;
    double currentPrice_;
    double volatility_;
    double interestRate_;
};