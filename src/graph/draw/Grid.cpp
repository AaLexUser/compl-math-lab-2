//
// Created by Alexey Lapin on 3/16/23.
//

#include "Grid.h"

void Grid::draw() {
    sf::RectangleShape line(sf::Vector2f(mainWindow.getW(), thickness_));
    line.setFillColor(sf::Color::Black);
    for (int i = 0; i < mainWindow.getH(); i += mainWindow.getSc()) {
        line.setPosition(0, i + mainWindow.getY0());
        mainWindow.getWindow().draw(line);
        line.setPosition(0,  mainWindow.getY0() - i);
        mainWindow.getWindow().draw(line);
    }
    line.setSize(sf::Vector2f(thickness_, mainWindow.getH()));
    for (int i = 0; i < mainWindow.getW(); i += mainWindow.getSc()) {
        line.setPosition(i + mainWindow.getX0(), 0);
        mainWindow.getWindow().draw(line);
        line.setPosition(mainWindow.getX0() - i, 0);
        mainWindow.getWindow().draw(line);
    }
}
