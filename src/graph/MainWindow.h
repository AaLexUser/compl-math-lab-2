//
// Created by Alexey Lapin on 3/6/23.
//

#ifndef INC_2_GRAPH_H
#define INC_2_GRAPH_H

#include <SFML/Graphics.hpp>

class MainWindow {
public:
    explicit MainWindow(double (*f)(double x)) : f_(f){
        window_.create(sf::VideoMode(w_, h_), "FunGraph");
    }
    void draw();
private:
    double (*f_)(double x);
    sf::RenderWindow window_;
    int w_ = 1800;
    int h_ = 1600;
    int scale_ = 60;
    float x0 = w_ / 2;
    float y0 = h_ / 2;
public:

    sf::RenderWindow &getWindow();

    void setW(int w);

    void setH(int h);

    void setScale(int sc);

    int getW() const;

    int getH() const;

    int getScale() const;

    float getX0() const;

    float getY0() const;

    void setX0(float x0);

    void setY0(float y0);

};


#endif //INC_2_GRAPH_H
