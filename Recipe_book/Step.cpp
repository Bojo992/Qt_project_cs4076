//
// Created by Boris Bobylkov on 29/03/2023.
//

#include "Step.h"

stepStruct::stepStruct(std::string text, int type) : step(text), type(type) {}

stepStruct::~stepStruct() {
}

const string &stepStruct::getStep() const {
    return step;
}

void stepStruct::setStep(const string &step) {
    stepStruct::step = step;
}

int stepStruct::getType() const {
    return type;
}

void stepStruct::setType(int type) {
    stepStruct::type = type;
}

stepStruct::stepStruct() {
}
