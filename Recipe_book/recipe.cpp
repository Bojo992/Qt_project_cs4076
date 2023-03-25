//
// Created by Boris Bobylkov on 24/03/2023.
//
#include "JsonHandler.h"
#include <vector>

class Recipe {
public:
    struct stepStruct{
        stepStruct(){};
        stepStruct(std::string *step, int type, std::string *img = nullptr) : step(step), type(type), img(img){};
        ~stepStruct(){
            delete step;
            delete img;
        }
        std::string *step;
        std::string *img;
        int type;
    };

    struct ingredient {
    public:
        union portion {
            int mg;
            int g;
            float kg;
            int ml;
            float liters;
            int spoon;
            int teaSpoon;
            float caps;
        };

        ingredient(float amount, int type, std::string name) : type(type), name(name) {
            setAmount(amount);
        }

        int type;
        portion amount;
        std::string name;

        void setAmount(float input) {
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

        float getAmount() {
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
    };
    Recipe() {}

    Recipe(handler::JsonHandler *unparsedRecipe) {
        *name = (*(unparsedRecipe->getRecipesJson()))["name"].asString();
        numberOfSteps = (*(unparsedRecipe->getRecipesJson()))["number of steps"].asInt();

        for (int i = 0; i < numberOfSteps; i++) {
            std::string *recipeStep = new string((*(unparsedRecipe->getRecipesJson()))["steps"][i][0].asString());
            int recipeStepType = (*(unparsedRecipe->getRecipesJson()))["steps"][i][1].asInt();
            std::string *recipeStepImg = ((*(unparsedRecipe->getRecipesJson()))["steps"][i][2].asString() == "") ?
                                         nullptr :
                                         new string ((*(unparsedRecipe->getRecipesJson()))["steps"][i][2].asString());

            step.push_back(new stepStruct(recipeStep, recipeStepType, recipeStepImg));
        }

        numberOfIngredients = (*(unparsedRecipe->getRecipesJson()))["number of ingredients"].asInt();

        for (int i = 0; i < numberOfIngredients; i++) {
            int type = (*(unparsedRecipe->getRecipesJson()))["ingredients"][i][0].asInt();
            std::string name = (*(unparsedRecipe->getRecipesJson()))["ingredients"][i][1].asString();
            float amount = (*(unparsedRecipe->getRecipesJson()))["ingredients"][i][2].asFloat();
            addIngredient(amount, type, name);
        }
    }

    ~Recipe() {
        delete name;
        for (ingredient i: ingredients) {
            delete &i;
        }
    }

    string *getName() const {
        return name;
    }

    int getNumberOfSteps() const {
        return numberOfSteps;
    }

    int getNumberOfIngredients() const {
        return numberOfIngredients;
    }

    const std::string* getStep(int position) const {
        return step.at(position)->step;
    }

    const vector<ingredient> &getIngredients() const {
        return ingredients;
    }

    void addIngredient(float amount, int type, std::string name) {
        ingredient *tempIngredient = new ingredient(amount, type, name);
        ingredients.push_back(*tempIngredient);
    }

    void addName(std::string *name) {
        this->name = name;
    }

    void addStep(std::string *step, int type, std::string *img = nullptr) {
        this->step.push_back(new stepStruct(step, type, img));
        numberOfSteps++;
    }

    void removeLastStep() {
        step.pop_back();
        numberOfSteps--;
    }

    Json::Value* asJson() {
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

private:
    std::string *name = new string("");
    int numberOfSteps;
    int numberOfIngredients;
    vector<stepStruct*> step;
    vector<ingredient> ingredients;
};