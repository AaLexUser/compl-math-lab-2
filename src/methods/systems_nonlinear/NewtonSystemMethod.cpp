//
// Created by Alexey Lapin on 3/18/23.
//

#include "NewtonSystemMethod.h"
#include "../linear/KramerRule.h"

void NewtonSystemMethod::solve() {
    double dxf = MathUtils::partialDerivative(f_, x0_, y0_);
    double dyf = MathUtils::partialDerivative(f_, x0_, y0_, 0.0001, false);
    double dxg = MathUtils::partialDerivative(g_, x0_, y0_);
    double dyg = MathUtils::partialDerivative(g_, x0_, y0_, 0.0001, false);
    double a[2][2] = {{dxf, dyf}, {dxg, dyg}};
    double b[2] = {-f_(x0_, y0_), -g_(x0_, y0_)};
    KramerRule::solve(a, b, roots_);
    double x1 = x0_ + roots_[0];
    double y1 = y0_ + roots_[1];
    if (abs(x1 - x0_) < tolerance_ && abs(y1 - y0_) < tolerance_) {
        std::cout << "x = " << x1 << std::endl;
        std::cout << "y = " << y1 << std::endl;
        std::cout << "f(x, y) = " << f_(x1, y1) << std::endl;
        std::cout << "g(x, y) = " << g_(x1, y1) << std::endl;
        std::cout << "counter = " << counter_ << std::endl;
        return;
    } else {
        x0_ = x1;
        y0_ = y1;
        counter_++;
        solve();
    }
}

NewtonSystemMethod::NewtonSystemMethod(double x0, double y0, double tolerance, double (*f)(double, double),
                                       double (*g)(double, double))
                                       : ISystemMethod(x0, y0, tolerance, f, g){

}
