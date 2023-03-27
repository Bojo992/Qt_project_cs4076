//
// Created by Boris Bobylkov on 24/03/2023.
//

#ifndef RECIPE_BOOK_RECIPE_H
#define RECIPE_BOOK_RECIPE_H

#include "json/JsonHandler.h"

class Recipe {
public:
    struct stepStruct{
    public:
        stepStruct();
        stepStruct(std::string , std::string , int);
        ~stepStruct();

        string getStep() const;

        void setStep(string step);

        string getImg() const;

        void setImg(string img);

        int getType() const;

        void setType(int type);

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
    Recipe(JsonHandler*);
    ~Recipe();

    string *getName() const;
    const vector<Recipe::ingredient> &getIngredients() const;
    int getNumberOfSteps() const;
    int getNumberOfIngredients() const;
    const std::string getStep(int position) const;
    void addIngredient(float amount, int type, std::string name);
    void addName(std::string *name);
    void addStep(std::string &step, int type, std::string &img);
    void removeLastStep();
    Json::Value* asJson();

private:
    std::string *name;
    int id;
//    static int totalId;
    int numberOfSteps;
    int numberOfIngredients;
    vector<stepStruct> step;
    vector<ingredient> ingredients;
};

#endif //RECIPE_BOOK_RECIPE_H
