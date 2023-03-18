//
// Created by Alexey Lapin on 3/16/23.
//

#ifndef COMPLMATH2_ISHAPE_H
#define COMPLMATH2_ISHAPE_H
#include <SFML/Graphics.hpp>
#include "../MainWindow.h"


class IShape {
public:
    virtual void draw(MainWindow & mainWindow) = 0;
    virtual ~IShape() = default;
};


#endif //COMPLMATH2_ISHAPE_H
