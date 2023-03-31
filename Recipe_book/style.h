//
// Created by Boris Bobylkov on 31/03/2023.
//

#ifndef RECIPE_BOOK_STYLE_H
#define RECIPE_BOOK_STYLE_H

#include <QString>
#include <QColor>

class style {
public:
    style();

    QString getStyle();

    static int getRed();

    static int getGreen();

    static int getBlue();

    static int red;
    static int green;
    static int blue;

    QColor getColor();
};


#endif //RECIPE_BOOK_STYLE_H
