#include "MainWindow.h"
#include "UiEvents.h"
#include <iostream>
#include "draw/Axis.h"
#include "draw/Grid.h"
#include "draw/FuncGraph.h"
#include "draw/AxisNumbers.h"


void MainWindow::draw(){
    window_.setFramerateLimit(60);

    sf::CircleShape point(2.f);
    point.setFillColor(sf::Color::Blue);

    sf::RectangleShape line[40];
    sf::Text text[40];
    sf::Font font;
    if (!font.loadFromFile("../Roboto/Roboto-Regular.ttf"))
    {
        std::cout << "Error loading font" << std::endl;
    }
    while (window_.isOpen())
    {
        sf::Event event;
        UiEvents uiEvents(*this);


        while (window_.pollEvent(event))
        {
            uiEvents.check(event);
        }
        window_.clear(sf::Color::White);
        Axis axis(3, *this);
        axis.draw();
        AxisNumbers axisNumbers(*this);
        axisNumbers.draw();
        Grid grid(1,*this);
        grid.draw();
        FuncGraph funcGraph(*this, f_, 100.0, 5.0);
        funcGraph.draw();
        window_.display();
    }
}


int MainWindow::getW() const {
    return w_;
}

int MainWindow::getH() const {
    return h_;
}

int MainWindow::getSc() const {
    return scale_;
}

float MainWindow::getX0() const {
    return x0;
}

float MainWindow::getY0() const {
    return y0;
}

void MainWindow::setW(int w) {
    w_ = w;
}

void MainWindow::setH(int h) {
    h_ = h;
}

void MainWindow::setSc(int sc) {
    scale_ = sc;
}


void MainWindow::setX0(float x0) {
    MainWindow::x0 = x0;
}

void MainWindow::setY0(float y0) {
    MainWindow::y0 = y0;
}

sf::RenderWindow& MainWindow::getWindow() {
    return window_;
}