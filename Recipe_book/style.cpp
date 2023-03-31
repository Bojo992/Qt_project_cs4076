//
// Created by Boris Bobylkov on 31/03/2023.
//

#include "style.h"
#include <sstream>
#include <QColor>

QString style::getStyle() {
    std::ostringstream t;
    t << "background-color: rgb(" << red << "%," << green << "%," << blue << "%);";
    QString output(QString::fromStdString(t.str()));

    return output;
}

style::style() {}

QColor style::getColor() {
    QColor t;
    t.setRgb(red, green, blue);
    return t;
}

int style::getRed() {
    return red;
}

int style::getGreen() {
    return green;
}

int style::getBlue() {
    return blue;
}

int style::red = 100;
int style::green = 100;
int style::blue = 100;
