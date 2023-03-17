//
// Created by Alexey Lapin on 3/17/23.
//

#ifndef COMPLMATH2_MATHUTILS_H
#define COMPLMATH2_MATHUTILS_H


class MathUtils {
    public:
    static double derivative(double (*pFunction)(double), double x, double h = 1e-5);
};


#endif //COMPLMATH2_MATHUTILS_H
