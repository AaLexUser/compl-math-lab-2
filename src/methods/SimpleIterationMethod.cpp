//
// Created by Alexey Lapin on 3/17/23.
//

#include "SimpleIterationMethod.h"

void SimpleIterationMethod::solve() {
    double x1 = phi(x0_, sigma_, f_);
    if(abs(x1 - x0_) < tolerance_){
        std::cout << "x = " << x1 << std::endl;
        std::cout << "f(x) = " << f_(x1) << std::endl;
        std::cout << "counter = " << counter << std::endl;
        return;
    }
    else {
        x0_ = x1;
        counter++;
        solve();
    };
}


double SimpleIterationMethod::phi(double x, double sigma, double (*f)(double)) {
    return x - f(x) / sigma;
}

SimpleIterationMethod::SimpleIterationMethod(double a, double b, double x0, double tolerance, double (*f)(double))
    : a_(a), b_(b), x0_(x0), IMethod(f, tolerance){
    sigma_ = std::max(abs(MathUtils::derivative(f, a_)), abs(MathUtils::derivative(f, b_)));
}
