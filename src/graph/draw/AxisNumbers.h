//
// Created by Alexey Lapin on 3/17/23.
//

#ifndef COMPLMATH2_AXISNUMBERS_H
#define COMPLMATH2_AXISNUMBERS_H


#include "IShape.h"

class AxisNumbers : public IShape{
public:
    explicit AxisNumbers( MainWindow &mainWindow) : mainWindow(mainWindow) {}
    void draw() override;
private:
    MainWindow &mainWindow;
};


#endif //COMPLMATH2_AXISNUMBERS_H
