//
// Created by Alexey Lapin on 3/17/23.
//

#include "SecantMethod.h"

void SecantMethod::solve() {
    double x2 = x1_ - f_(x1_) * (x1_ - x0_) / (f_(x1_) - f_(x0_));
    if(abs(x2 - x1_) < tolerance_){
        std::cout << "x = " << x2 << std::endl;
        std::cout << "f(x) = " << f_(x2) << std::endl;
        std::cout << "counter = " << counter << std::endl;
        return;
    }
    else {
        x0_ = x1_;
        x1_ = x2;
        counter++;
        solve();
    };

}
