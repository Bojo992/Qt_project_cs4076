//
// Created by Boris Bobylkov on 24/03/2023.
//

#ifndef RECIPE_BOOK_JSONHANDLER_H
#define RECIPE_BOOK_JSONHANDLER_H

#include "dist/json/json.h"
#include "JsonReader.h"
#include "JsonWriter.h"

namespace handler {
    class JsonHandler : JsonReader, JsonWriter {
        JsonHandler();

        JsonHandler(Json::Value input);

        ~JsonHandler();

        void writeJson();

        void readJson();

    public:

    JsonHandler* getRecipe(std::string name) const;
    Json::Value* getRecipesJson() const;

        void addRecipe(Json::Value *input);
    };
}
#endif //RECIPE_BOOK_JSONHANDLER_H
