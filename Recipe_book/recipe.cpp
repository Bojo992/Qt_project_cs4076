#include "recipe.h"
//
// Created by Boris Bobylkov on 24/03/2023.
//
#include "JsonHandler.h"
#include "recipe.h"
#include <vector>
Recipe::stepStruct::stepStruct(){}
Recipe::stepStruct::stepStruct(std::string *img, std::string *step, int type) : step(step), img(img){
    Recipe::stepStruct::type = type;
}

Recipe::stepStruct::~stepStruct(){
    delete step;
    delete img;
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

    Recipe::Recipe(){};

Recipe::Recipe(JsonHandler *unparsedRecipe) {
        *name = (*(unparsedRecipe->getRecipesJson()))["name"].asString();
        numberOfSteps = (*(unparsedRecipe->getRecipesJson()))["number of steps"].asInt();

        for (int i = 0; i < numberOfSteps; i++) {
            std::string *recipeStep = new string((*(unparsedRecipe->getRecipesJson()))["steps"][i][0].asString());
            int recipeStepType = (*(unparsedRecipe->getRecipesJson()))["steps"][i][1].asInt();
            std::string *recipeStepImg = ((*(unparsedRecipe->getRecipesJson()))["steps"][i][2].asString() == "") ?
                                         nullptr :
                                         new string ((*(unparsedRecipe->getRecipesJson()))["steps"][i][2].asString());
            Recipe::stepStruct *temp = new stepStruct(recipeStepImg, recipeStep, recipeStepType);
            step.push_back(*temp);
        }

        numberOfIngredients = (*(unparsedRecipe->getRecipesJson()))["number of ingredients"].asInt();

        for (int i = 0; i < numberOfIngredients; i++) {
            int type = (*(unparsedRecipe->getRecipesJson()))["ingredients"][i][0].asInt();
            std::string name = (*(unparsedRecipe->getRecipesJson()))["ingredients"][i][1].asString();
            float amount = (*(unparsedRecipe->getRecipesJson()))["ingredients"][i][2].asFloat();
            addIngredient(amount, type, name);
        }
    }

Recipe::~Recipe() {
        delete name;
        for (int i = 0; i < numberOfIngredients; i++) {
            ingredients.pop_back();
        }
        delete &ingredients;

        for (int i = 0; i < numberOfSteps; i++) {
            step.pop_back();
        }
        delete &step;
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

    const std::string* Recipe::getStep(int position) const {
        return step.at(position).step;
    }

    const vector<Recipe::ingredient> &Recipe::getIngredients() const {
        return ingredients;
    }

    void Recipe::addIngredient(float amount, int type, std::string name) {
        Recipe::ingredient *tempIngredient = new ingredient(amount, type, name);
        Recipe::ingredients.push_back(*tempIngredient);
    }

    void Recipe::addName(std::string *name) {
        this->name = name;
    }

    void Recipe::addStep(std::string *step, int type, std::string *img) {
        stepStruct *temp = (new stepStruct(img, step, type));
        this->step.push_back(*temp);
        numberOfSteps++;
    }

    void Recipe::removeLastStep() {
        step.pop_back();
        numberOfSteps--;
    }

    Json::Value* Recipe::asJson() {
        Json::Value *recipeJson = new Json::Value;
        (*recipeJson)["name"] = name;
        (*recipeJson)["number of steps"] = numberOfSteps;
        (*recipeJson)["number of ingredients"] = numberOfIngredients;

        for (int i = 0; i < numberOfIngredients; i++) {
            (*recipeJson)["ingredients"][i][0] = ingredients.at(i).type;
            (*recipeJson)["ingredients"][i][1] = ingredients.at(i).name;
            (*recipeJson)["ingredients"][i][2] = ingredients.at(i).getAmount();
        }



        return recipeJson;
    }