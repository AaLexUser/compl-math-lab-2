//
// Created by Alexey Lapin on 3/17/23.
//

#include "AxisNumbers.h"

void AxisNumbers::draw() {
    sf::Font font;
    if (!font.loadFromFile("/Users/aleksejlapin/CLionProjects/Вычмат2/Roboto/Roboto-Regular.ttf")) {
        throw std::runtime_error("Can't load font");
    }
    sf::Text text;
    text.setFont(font);
    text.setCharacterSize(0.5 * mainWindow.getSc());
    text.setFillColor(sf::Color::Black);
    mainWindow.getWindow().draw(text);
    text.setPosition(mainWindow.getX0() - mainWindow.getSc() / 3, mainWindow.getY0() + 0.3 * mainWindow.getSc());
    text.setString("0");
    mainWindow.getWindow().draw(text);
    for (int i = 1; i < mainWindow.getW() / mainWindow.getSc(); i++) {
        text.setPosition(mainWindow.getX0() + i * mainWindow.getSc() - 0.2 * mainWindow.getSc(), mainWindow.getY0() +  0.3 * mainWindow.getSc());
        text.setString(std::to_string(i));
        mainWindow.getWindow().draw(text);
        text.setPosition(mainWindow.getX0() - i * mainWindow.getSc() -  0.2 * mainWindow.getSc(), mainWindow.getY0() +  0.3 * mainWindow.getSc());
        text.setString(std::to_string(-i));
        mainWindow.getWindow().draw(text);
    }
    for (int i = 1; i < mainWindow.getH() / mainWindow.getSc(); i++) {
        text.setPosition(mainWindow.getX0() + 0.2 * mainWindow.getSc(), mainWindow.getY0() + i * mainWindow.getSc());
        text.setString(std::to_string(-i));
        mainWindow.getWindow().draw(text);
        text.setPosition(mainWindow.getX0() + 0.2 * mainWindow.getSc(), mainWindow.getY0() - i * mainWindow.getSc());
        text.setString(std::to_string(i));
        mainWindow.getWindow().draw(text);
    }

}
