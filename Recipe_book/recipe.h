//
// Created by Boris Bobylkov on 24/03/2023.
//

#ifndef RECIPE_BOOK_RECIPE_H
#define RECIPE_BOOK_RECIPE_H

#include <string>
#include <vector>
#include "Step.h"
#include "print.h"


using namespace std;

class Recipe : public test::print{
public:
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
        string getType();
    };

    Recipe();
    Recipe(const Recipe&);
    ~Recipe();

    string getName() const;
    const vector<Recipe::ingredient> &getIngredients() const;
    int getNumberOfSteps() const;
    int getNumberOfIngredients() const;
    stepStruct getStep(int position);
    void addIngredient(float amount, int type, std::string name);
    void addName(std::string name);
    void addStep(std::string &step, int type);
    void removeLastStep();

    int getId() const;

    void setId(int);

    void setName(string name);

    void setNumberOfSteps(int numberOfSteps);

    void setNumberOfIngredients(int numberOfIngredients);

    void setStep(const vector<stepStruct> &step);

    void setIngredients(const vector<ingredient> &ingredients);

    const vector<stepStruct> &getSteps() const;

    void out() override;

private:
    std::string name;
    int id;
    static int totalId;
    int numberOfSteps = 0;
    int numberOfIngredients = 0;
    vector<stepStruct> step;
    vector<ingredient> ingredients;

    static void addTotalId();
};

#endif //RECIPE_BOOK_RECIPE_H
