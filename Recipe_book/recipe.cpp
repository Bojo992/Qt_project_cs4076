#include "recipe.h"
//
// Created by Boris Bobylkov on 24/03/2023.
//
#include "json/JsonHandler.h"
#include "recipe.h"
#include <vector>
#include <iostream>

Recipe::stepStruct::stepStruct(){}
Recipe::stepStruct::stepStruct(std::string img, std::string step, int type) : step(step), img(img){
    Recipe::stepStruct::type = type;
}

Recipe::stepStruct::~stepStruct(){

}

string Recipe::stepStruct::getStep() const {
    return step;
}

void Recipe::stepStruct::setStep(string step) {
    stepStruct::step = step;
}

string Recipe::stepStruct::getImg() const {
    return img;
}

void Recipe::stepStruct::setImg(string img) {
    stepStruct::img = img;
}

int Recipe::stepStruct::getType() const {
    return type;
}

void Recipe::stepStruct::setType(int type) {
    stepStruct::type = type;
}

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
        }

Recipe::Recipe(){
        id = 1;
};

Recipe::Recipe(JsonHandler *unparsedRecipe) {
        id = (*(unparsedRecipe->getRecipesJson()))["id"].asInt();
        *name = (*(unparsedRecipe->getRecipesJson()))["name"].asString();
        numberOfSteps = (*(unparsedRecipe->getRecipesJson()))["number of steps"].asInt();

        for (int i = 0; i < numberOfSteps; i++) {
            std::string *recipeStep = new string((*(unparsedRecipe->getRecipesJson()))["steps"][i + ""]["0"].asString());
            int recipeStepType = (*(unparsedRecipe->getRecipesJson()))["steps"][i + ""]["1"].asInt();
            std::string *recipeStepImg = ((*(unparsedRecipe->getRecipesJson()))["steps"][i + ""]["2"].asString() == "") ?
                                         nullptr :
                                         new string ((*(unparsedRecipe->getRecipesJson()))["steps"][i + ""]["2"].asString());
            Recipe::stepStruct *temp = new stepStruct(*recipeStepImg, *recipeStep, recipeStepType);
            step.push_back(*temp);
        }

        numberOfIngredients = (*(unparsedRecipe->getRecipesJson()))["number of ingredients"].asInt();

        for (int i = 0; i < numberOfIngredients; i++) {
            int type = (*(unparsedRecipe->getRecipesJson()))["ingredients"][i + ""]["0"].asInt();
            std::string name = (*(unparsedRecipe->getRecipesJson()))["ingredients"][i + ""]["1"].asString();
            float amount = (*(unparsedRecipe->getRecipesJson()))["ingredients"][i + ""]["2"].asFloat();
            addIngredient(amount, type, name);
        }
    }

Recipe::~Recipe() {
        delete name;
        for (int i = 0; i < numberOfIngredients; i++) {
            ingredients.pop_back();
        }

        for (int i = 0; i < numberOfSteps; i++) {
            step.pop_back();
        }
    }

    string *Recipe::getName() const {
        return name;
    }

    int Recipe::getNumberOfSteps() const {
        return numberOfSteps;
    }

    int Recipe::getNumberOfIngredients() const {
        return numberOfIngredients;
    }

    const std::string Recipe::getStep(int position) const {
        return step.at(position).step;
    }

    const vector<Recipe::ingredient> &Recipe::getIngredients() const {
        return ingredients;
    }

    void Recipe::addIngredient(float amount, int type, std::string name) {
        Recipe::ingredient *tempIngredient = new ingredient(amount, type, name);
        Recipe::ingredients.push_back(*tempIngredient);
        numberOfIngredients++;
    }

    void Recipe::addName(std::string *name) {
        this->name = name;
    }

    void Recipe::addStep(std::string &step, int type, std::string &img) {
//        stepStruct *temp = (new stepStruct(img, step, type));
        Recipe::step.push_back(*(new stepStruct(img, step, type)));
        numberOfSteps++;
    }

    void Recipe::removeLastStep() {
        step.pop_back();
        numberOfSteps--;
    }

    Json::Value* Recipe::asJson() {
        Json::Value *recipeJson = new Json::Value;
        (*recipeJson)["name"] = *name;
        (*recipeJson)["number of steps"] = numberOfSteps;
        (*recipeJson)["number of ingredients"] = numberOfIngredients;

        for (int i = 0; i < numberOfIngredients; i++) {
            string jsonPosition = to_string(i);
            (*recipeJson)["ingredients"][jsonPosition]["0"] = ingredients.at(i).type;
            (*recipeJson)["ingredients"][jsonPosition]["1"] = ingredients.at(i).name;
            (*recipeJson)["ingredients"][jsonPosition]["2"] = ingredients.at(i).getAmount();
        }

        for (int i = 0; i < numberOfSteps; i++) {
            string jsonPosition = to_string(i);
            (*recipeJson)["step"][jsonPosition]["0"] = step.at(i).getStep();
            (*recipeJson)["step"][jsonPosition]["1"] = step.at(i).getType();
            (*recipeJson)["step"][jsonPosition]["2"] = step.at(i).getImg();
        }

        return recipeJson;
    }