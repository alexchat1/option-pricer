#include "black_scholes.hpp"
#include <cmath>
#include <algorithm>
#include <utility>

namespace {
inline double normal_cdf(double x) {
    return 0.5 * (1.0 + std::erf(x / std::sqrt(2.0)));
}
}

std::pair<double, double> BlackScholes::run() {
    // // Handle degenerate cases (zero volatility or zero time) using forward payoff
    // if (volatility_ <= 0.0 || timeToMaturity_ <= 0.0) {
    //     double forward = currentPrice_ - strike_ * std::exp(-interestRate_ * timeToMaturity_);
    //     return std::max(forward, 0.0);
    // }

    double x = volatility_ * std::sqrt(timeToMaturity_);
    double d1 = (std::log(currentPrice_ / strike_) + (interestRate_ + 0.5 * volatility_ * volatility_) * timeToMaturity_) / x;
    double d2 = d1 - x;

    double callPrice = normal_cdf(d1) * currentPrice_ - normal_cdf(d2) * strike_ * std::exp(-interestRate_ * timeToMaturity_);
    double putPrice = strike_*std::exp(-interestRate_*timeToMaturity_) - currentPrice_ + callPrice;
    return std::make_pair(callPrice, putPrice);
}