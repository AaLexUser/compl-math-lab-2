//
// Created by Alexey Lapin on 3/16/23.
//

#include "Axis.h"
void Axis::draw(MainWindow &mainWindow) {
    sf::RectangleShape line(sf::Vector2f(mainWindow.getW(), thickness_));
    line.setFillColor(sf::Color::Black);
    line.setPosition(0, mainWindow.getY0());
    mainWindow.getWindow().draw(line);
    line.setSize(sf::Vector2f(thickness_, mainWindow.getH()));
    line.setPosition(mainWindow.getX0(), 0);
    mainWindow.getWindow().draw(line);
}
