//
// Created by Alexey Lapin on 3/17/23.
//

#include "NewtonMethod.h"

void NewtonMethod::solve() {
    double x1 = x0_ - f_(x0_) / MathUtils::derivative(f_, x0_);
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

NewtonMethod::NewtonMethod(double a, double b, double tolerance, double (*f)(double))
    : IMethod(a, b, f, tolerance){
    if(f_(a) * MathUtils::secondDerivative(f_, a) > 0){
        x0_ = a;
    } else {
        x0_ = b;
    }
}
