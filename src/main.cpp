#include <iostream>
#include "graph/MainWindow.h"
#include "methods/HalfDivisionMethod.h"
#include "methods/IMethod.h"
#include "methods/SecantMethod.h"
#include "methods/SimpleIterationMethod.h"
#include "methods/NewtonMethod.h"

int main()
{
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
    switch(chose){
        case 1: {
            std::cout << "Half division method\n";
            std::unique_ptr<IMethod> method = std::make_unique<HalfDivisionMethod>(a, b, tolerance,
                                                                                   func);
            method->solve();
            break;
        }
        case 2: {
            std::cout << "Secant method\n";
            std::unique_ptr<IMethod> method = std::make_unique<SecantMethod>(a, b, tolerance,
                                                                             func);
            method->solve();
            break;
        }
        case 3: {
            std::cout << "Simple iteration method\n";
            double x0 = -2;
            std::unique_ptr<IMethod> method = std::make_unique<SimpleIterationMethod>(a, b, x0, tolerance,
                                                                             func);
            method->solve();
            break;
        }
        case 4: {
            std::cout << "Newton's method\n";
            double x0 = -2;
            std::unique_ptr<IMethod> method = std::make_unique<NewtonMethod>(x0, tolerance,
                                                                                      func);
            method->solve();
            break;
        }
        case 5:
            return 0;
        default:
            std::cout << "Wrong input\n";
            return 0;
    }
    MainWindow mainWindow(func);
    mainWindow.draw();
    return 0;
}
