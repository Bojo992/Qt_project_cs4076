#include "recipe.h"
//
// Created by Boris Bobylkov on 24/03/2023.
//
#include "json/JsonHandler.h"
#include "recipe.h"
#include <vector>
#include <iostream>
#include "Step.h"

int Recipe::totalId = 1;

Recipe::ingredient::ingredient(float amount, int type, std::string name) : type(type), name(name) {
            setAmount(amount);
        }

        void Recipe::ingredient::setAmount(float input) {
            switch (type) {
                case 0:
                    amount.mg = input;
                    break;
                case 1:
                    amount.g = input;
                    break;
                case 2:
                    amount.kg = input;
                    break;
                case 3:
                    amount.ml = input;
                    break;
                case 4:
                    amount.liters = input;
                    break;
                case 5:
                    amount.spoon = input;
                    break;
                case 6:
                    amount.teaSpoon = input;
                    break;
                case 7:
                    amount.caps = input;
                    break;
            }
        }

        float Recipe::ingredient::getAmount() {
            switch (type) {
                case 0:
                    return amount.mg;
                    break;
                case 1:
                    return amount.g;
                    break;
                case 2:
                    return amount.kg;
                    break;
                case 3:
                    return amount.ml;
                    break;
                case 4:
                    return amount.liters;
                    break;
                case 5:
                    return amount.spoon;
                    break;
                case 6:
                    return amount.teaSpoon;
                    break;
                case 7:
                    return amount.caps;
                    break;
            }

            return -1;
        }

string Recipe::ingredient::getType() {
    switch (type) {
        case 0:
            return "milligrams";
            break;
        case 1:
            return "grams";
            break;
        case 2:
            return "kilograms";
            break;
        case 3:
            return "milliliters";
            break;
        case 4:
            return "liters";
            break;
        case 5:
            return "spoon";
            break;
        case 6:
            return "teaSpoon";
            break;
        case 7:
            return "caps";
            break;
    }

    return "";
}

Recipe::Recipe(){
        id = totalId;
        addTotalId();
};

Recipe::~Recipe() {
//        delete name;
        for (int i = 0; i < numberOfIngredients; i++) {
            ingredients.pop_back();
        }

        for (int i = 0; i < numberOfSteps; i++) {
            step.pop_back();
        }
    }

    string Recipe::getName() const {
        return name;
    }

    int Recipe::getNumberOfSteps() const {
        return numberOfSteps;
    }

    int Recipe::getNumberOfIngredients() const {
        return numberOfIngredients;
    }

    stepStruct Recipe::getStep(int position) {
        return step.at(position);
    }

    const vector<Recipe::ingredient> &Recipe::getIngredients() const {
        return ingredients;
    }

    void Recipe::addIngredient(float amount, int type, std::string name) {
        Recipe::ingredient *tempIngredient = new ingredient(amount, type, name);
        Recipe::ingredients.push_back(*tempIngredient);
        numberOfIngredients++;
    }

    void Recipe::addName(std::string name) {
        this->name = name;
    }

    void Recipe::addStep(std::string &step, int type) {
        Recipe::step.push_back(*(new stepStruct(step, type)));
        numberOfSteps++;
    }

    void Recipe::removeLastStep() {
        step.pop_back();
        numberOfSteps--;
    }

    void Recipe::addTotalId() {
        totalId++;
    }

const vector<stepStruct> &Recipe::getSteps() const {
    return step;
}

void Recipe::setId(int newId) {
    id = newId;
}

void Recipe::setName(string name) {
    Recipe::name = name;
}

void Recipe::setNumberOfSteps(int numberOfSteps) {
    Recipe::numberOfSteps = numberOfSteps;
}

void Recipe::setNumberOfIngredients(int numberOfIngredients) {
    Recipe::numberOfIngredients = numberOfIngredients;
}

void Recipe::setStep(const vector<stepStruct> &step) {
    Recipe::step = step;
}

void Recipe::setIngredients(const vector<ingredient> &ingredients) {
    Recipe::ingredients = ingredients;
}

int Recipe::getId() const {
    return id;
}

Recipe::Recipe(const Recipe & recipe) {
    setId(recipe.getId());
    string name = recipe.getName().c_str();
    setName(name);

    auto ingredients = recipe.getIngredients();

    for (auto i : recipe.getIngredients()) {
        name = *new string (i.name);
        addIngredient(i.getAmount(), i.type, name);
    }

    for (auto i : recipe.getSteps()) {
        string text = i.step.c_str();
        addStep(text, i.type);
    }
}

void Recipe::out() {
    cout << name << endl;
    cout << id << endl;
    cout << "num step " << numberOfSteps << endl;
    for (auto i : ingredients) {
        cout << i.name << " " << i.getAmount() << endl;
    }
    for (auto i : step) {
        cout << i.step << endl;
    }
}
