//
// Created by Boris Bobylkov on 24/03/2023.
//

#ifndef RECIPE_BOOK_JSONHANDLER_H
#define RECIPE_BOOK_JSONHANDLER_H

#include "JsonReader.h"
#include "../dist/json/json.h"
#include "JsonReader.h"
#include "JsonWriter.h"
#include "../recipe.h"
#include <vector>


class JsonHandler : JsonReader, JsonWriter {
public:
    JsonHandler();

    JsonHandler(Json::Value input);

    ~JsonHandler();

    void writeJson();

    void readJson();

    vector<Recipe> getRecipes();

    void addRecipe(Recipe&);
private:
    Recipe toRecipe(Json::Value json);

    Json::Value &parsToJson(Recipe recipe);
};
#endif //RECIPE_BOOK_JSONHANDLER_H
