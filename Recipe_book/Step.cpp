//
// Created by Boris Bobylkov on 29/03/2023.
//

#include "Step.h"

stepStruct::stepStruct(std::string img, std::string text, int type) : img(img), step(text), type(type) {}

stepStruct::~stepStruct() {
}

const string &stepStruct::getStep() const {
    return step;
}

void stepStruct::setStep(const string &step) {
    stepStruct::step = step;
}

const string &stepStruct::getImg() const {
    return img;
}

void stepStruct::setImg(const string &img) {
    stepStruct::img = img;
}

int stepStruct::getType() const {
    return type;
}

void stepStruct::setType(int type) {
    stepStruct::type = type;
}
