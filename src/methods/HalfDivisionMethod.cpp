//
// Created by Alexey Lapin on 3/9/23.
//

#include "HalfDivisionMethod.h"

void HalfDivisionMethod::solve() {
    double x = (a_ + b_) / 2;
    if(f_(a_) * f_(x) > 0){
        a_ = x;
    } else {
        b_ = x;
    }
    if(abs(a_- b_) < tolerance_){
        x = (a_ + b_) / 2;
        std::cout << "x = " << x << std::endl;
        std::cout << "f(x) = " << f_(x) << std::endl;
        std::cout << "counter = " << counter << std::endl;
        return;
    }
    else { counter++; solve();};
}
