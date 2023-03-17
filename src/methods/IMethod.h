//
// Created by Alexey Lapin on 3/9/23.
//

#ifndef INC_2_METHOD_H
#define INC_2_METHOD_H

#include <iostream>
#include <cmath>
#include "../utils/MathUtils.h"

struct IMethod{
    public:
        explicit IMethod(double (*f)(double x), double tolerance)
            : f_(f), tolerance_(tolerance) {}
        virtual ~IMethod() = default;
        virtual void solve() = 0;
    protected:
        double (*f_)(double x);
        double tolerance_;
        unsigned int counter = 0;
};
#endif //INC_2_METHOD_H