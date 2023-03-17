//
// Created by Alexey Lapin on 3/16/23.
//

#include "UiEvents.h"
#include <iostream>
using namespace sf;
void UiEvents::check(sf::Event event) {
    int sc = mainWindow.getSc();
    int x0 = mainWindow.getX0();
    int y0 = mainWindow.getY0();

    switch (event.type) {
        case Event::Closed:
            mainWindow.getWindow().close();
            break;
        case Event::MouseWheelMoved:
            if (event.mouseWheel.delta > 0) {
                sc+= event.mouseWheel.delta;
            }
            else if (event.mouseWheel.delta < 0) {
                sc = sc + event.mouseWheel.delta > 1 ? sc + event.mouseWheel.delta : 1;
            }
            break;
        case Event::KeyReleased:
            if (event.key.code == Keyboard::Up) {
                y0 += 10;
            }
            else if (event.key.code == Keyboard::Down) {
                y0 -= 10;
            }
            else if (event.key.code == Keyboard::Left) {
                x0 += 10;
            }
            else if (event.key.code == Keyboard::Right) {
                x0 -= 10;
            }
            else if (event.key.code == Keyboard::Escape) {
                x0 = mainWindow.getW() / 2;
                y0 = mainWindow.getH() / 2;
                sc = 30;
            }
            else if (event.key.code == Keyboard::D){
                sc += 5;
            }
            else if (event.key.code == Keyboard::F){
                sc = sc - 5 > 0 ? sc - 5 : 0;
            }
            break;
        default:
            break;
    }
    mainWindow.setSc(sc);
    mainWindow.setX0(x0);
    mainWindow.setY0(y0);
}
