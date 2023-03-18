//
// Created by Alexey Lapin on 3/16/23.
//

#ifndef COMPLMATH2_GRID_H
#define COMPLMATH2_GRID_H

#include "IShape.h"

class Grid : public IShape{
public:
    Grid(int thickness, MainWindow &mainWindow) : thickness_(thickness), mainWindow(mainWindow) {}
    void draw(MainWindow &mainWindow) override;
private:
    int thickness_;
};


#endif //COMPLMATH2_GRID_H
