//
// Created by Alexey Lapin on 3/16/23.
//

#ifndef COMPLMATH2_AXIS_H
#define COMPLMATH2_AXIS_H

#include "../MainWindow.h"
#include "IShape.h"

class Axis : public IShape{
public:
    explicit Axis(int thickness) : thickness_(thickness) {}
    void draw(MainWindow &mainWindow) override;
private:
    int thickness_;
};


#endif //COMPLMATH2_AXIS_H
