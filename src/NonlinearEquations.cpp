//
// Created by Alexey Lapin on 3/18/23.
//

#include "NonlinearEquations.h"
#include "methods/nonlinear/HalfDivisionMethod.h"
#include "methods/nonlinear/SecantMethod.h"
#include "methods/nonlinear/SimpleIterationMethod.h"
#include "methods/nonlinear/NewtonMethod.h"

void NonlinearEquations::process() {
    int chose;
    double a, b, tolerance;
    auto func = [](double x) { return x * x * x - x + 4; };
    a = -2;
    b =-1;
    tolerance = 0.01;
    std::string fun;
    std::cout << "1. Half division method\n" << "2. Secant method\n"
              << "3. Simple iteration method\n" << "4. Newton's method\n" << "5. Exit\n";
    std::cin >> chose;
    std::unique_ptr<IMethod> method;
    switch(chose){
        case 1: {
            std::cout << "Half division method\n";
            method = std::make_unique<HalfDivisionMethod>(a, b, tolerance,func);
            break;
        }
        case 2: {
            std::cout << "Secant method\n";
            method = std::make_unique<SecantMethod>(a, b, tolerance,func);
            break;
        }
        case 3: {
            std::cout << "Simple iteration method\n";
            method = std::make_unique<SimpleIterationMethod>(a, b, tolerance,func);
            break;
        }
        case 4: {
            std::cout << "Newton's method\n";
            method = std::make_unique<NewtonMethod>(a,b, tolerance,func);
            break;
        }
        case 5:
            return;
        default:
            std::cout << "Wrong input\n";
            return;
    }
    method->solve();
    MainWindow mainWindow(func);
    mainWindow.draw();
    return;
}
