//
// Created by Alexey Lapin on 3/18/23.
//

#include "SystemsNonlinearEquations.h"

void SystemsNonlinearEquations::process() {
    NewtonSystemMethod newtonSystemMethod(1, 1, 0.0001, [](double x, double y) { return 0.1*x*x+x+0.2*y*y-0.3; },
                                          [](double x, double y) { return 0.2*x*x+y+0.1*x*y-0.7; });
    newtonSystemMethod.solve();
}
