//
// Created by Alexey Lapin on 3/9/23.
//

#ifndef INC_2_HALFDIVISIONMETHOD_H
#define INC_2_HALFDIVISIONMETHOD_H

#include "IMethod.h"
struct HalfDivisionMethod : public IMethod {
    HalfDivisionMethod(double a, double b, double tolerance ,double (*f)(double x)) :
                                                    a_(a), b_(b), IMethod(f, tolerance) {
        counter++;
    }
    void solve() override;
private:
    double a_;
    double b_;
};
#endif //INC_2_HALFDIVISIONMETHOD_H