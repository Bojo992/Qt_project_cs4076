//
// Created by Boris Bobylkov on 24/03/2023.
//

#ifndef RECIPE_BOOK_RECIPE_H
#define RECIPE_BOOK_RECIPE_H

#include "JsonHandler.h"

class Recipe {
public:
    struct stepStruct{
        stepStruct();
        stepStruct(std::string *step, int type, std::string *img = nullptr);
        std::string step;
        std::string img;
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

        ingredient(float amount, int type, std::string name);
        int type;
        portion amount;
        std::string name;
        void setAmount(float input);
        float getAmount();
    };

    Recipe();
    Recipe(handler::JsonHandler*);
    ~Recipe();

    string *getName() const;
    int getNumberOfSteps() const;
    int getNumberOfIngredients() const;
    const std::string* getStep(int position) const;
    const vector<ingredient> &getIngredients() const;
    void addIngredient(float amount, int type, std::string name);
    void addName(std::string *name);
    void addStep(std::string *step);
    void removeLastStep();
    Json::Value* asJson();

private:
    std::string *name;
    int numberOfSteps;
    int numberOfIngredients;
    vector<stepStruct> step;
    vector<ingredient> ingredients;
};

#endif //RECIPE_BOOK_RECIPE_H
