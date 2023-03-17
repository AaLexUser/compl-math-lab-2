//
// Created by Alexey Lapin on 3/17/23.
//

#ifndef COMPLMATH2_SECANTMETHOD_H
#define COMPLMATH2_SECANTMETHOD_H


#include "IMethod.h"

class SecantMethod : public IMethod{
public:
    SecantMethod(double x0, double x1, double tolerance, double (*f)(double x)) :
            x0_(x0), x1_(x1), IMethod(f, tolerance) {}
    void solve() override;
private:

    double x0_;
    double x1_;
};


#endif //COMPLMATH2_SECANTMETHOD_H
