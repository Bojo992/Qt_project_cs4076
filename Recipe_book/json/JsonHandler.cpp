//
// Created by Boris Bobylkov on 24/03/2023.
//

#include "JsonHandler.h"
#include "JsonReader.h"
#include "JsonWriter.h"
#include "../dist/json/json.h"
#include <iostream>
#include <fstream>
#include <vector>

Json::Value *recipesJson = new Json::Value();

JsonHandler::JsonHandler() {
            readJson();
};

JsonHandler::JsonHandler(Json::Value input) {
    recipesJson = &input;
}

JsonHandler::~JsonHandler() {
    delete recipesJson;
};

void JsonHandler::readJson() {
    fstream input;
    input.open("recipe.json",
               fstream::in);

    if (!input.is_open()) {
        input.close();
        return;
    }

    Json::CharReaderBuilder builder;

    builder["collectComments"] = true;
    JSONCPP_STRING errs;

    if (!Json::parseFromStream(builder, input, recipesJson, &errs)) {
        std::cout << errs << std::endl;
        return;
    }

    input.close();
    return;
}

void JsonHandler::writeJson() {
    fstream write;
    write.open("recipe.json", fstream::in | fstream::out | ios::trunc);

    write << *recipesJson;

    write.close();
}

void JsonHandler::addRecipe(Recipe &input) {
    (*recipesJson)[to_string((input).getId())] = parsToJson(input);
}

Recipe JsonHandler::toRecipe(Json::Value json) {
    Recipe *recipe = new Recipe;

    if ((*recipe).getId() != json["id"].asInt()) {
        (*recipe).setId(json["id"].asInt());
    }

    string name = *new string(json["name"].asString());
    int numberOfSteps = json["number of steps"].asInt();
    int numberOfIngredients = json["number of ingredients"].asInt();

    (*recipe).setName(name);
    (*recipe).setNumberOfSteps(numberOfSteps);
    (*recipe).setNumberOfIngredients(numberOfIngredients);

    for (int i = 0; i < numberOfSteps; i++) {
        std::string *recipeStep = new string(json["steps"][to_string(i)]["0"].asString());
        int recipeStepType = json["steps"][to_string(i)]["1"].asInt();
        string img = json["steps"][to_string(i)]["2"].asString();
        (*recipe).addStep(img, *recipeStep, recipeStepType);
    }

    for (int i = 0; i < numberOfIngredients; i++) {
        int type = json["ingredients"][to_string(i)]["0"].asInt();
        std::string name = json["ingredients"][to_string(i)]["1"].asString();
        float amount = json["ingredients"][to_string(i)]["2"].asFloat();
        (*recipe).addIngredient(amount, type, name);
    }

    return (*recipe);
}

Json::Value &JsonHandler::parsToJson(Recipe recipe) {
    Json::Value *recipeJson = new Json::Value;
    (*recipeJson)["name"] = recipe.getName();
    (*recipeJson)["id"] = recipe.getId();
    int numberOfSteps = recipe.getNumberOfSteps();
    (*recipeJson)["number of steps"] = recipe.getNumberOfSteps();
    int numberOfIngredients = recipe.getNumberOfIngredients();
    (*recipeJson)["number of ingredients"] = recipe.getNumberOfIngredients();

    auto ingredients = recipe.getIngredients();

    for (int i = 0; i < numberOfIngredients; i++) {
        string jsonPosition = to_string(i);
        (*recipeJson)["ingredients"][jsonPosition]["0"] = ingredients.at(i).type;
        (*recipeJson)["ingredients"][jsonPosition]["1"] = ingredients.at(i).name;
        (*recipeJson)["ingredients"][jsonPosition]["2"] = ingredients.at(i).getAmount();
    }

    auto step = recipe.getSteps();

    for (int i = 0; i < numberOfSteps; i++) {
        string jsonPosition = to_string(i);
        (*recipeJson)["step"][jsonPosition]["0"] = step.at(i).getStep();
        (*recipeJson)["step"][jsonPosition]["1"] = step.at(i).getType();
    }

    return *recipeJson;
}

vector<Recipe> JsonHandler::getRecipes() {
    vector<Recipe> *recipesVector = new vector<Recipe>;

    for (Json::Value i : *recipesJson) {
        (*recipesVector).push_back(toRecipe(i));
    }

    return *recipesVector;
}
