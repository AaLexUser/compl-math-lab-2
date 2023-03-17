//
// Created by Alexey Lapin on 3/17/23.
//

#include "MathUtils.h"

double MathUtils::derivative(double (*pFunction)(double), double x, double h) {
    return (pFunction(x + h) - pFunction(x)) / h;
}
