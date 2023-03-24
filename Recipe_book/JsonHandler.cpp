//
// Created by Boris Bobylkov on 24/03/2023.
//

#include "JsonHandler.h"
#include "JsonReader.h"
#include "JsonWriter.h"
#include <iostream>
#include <fstream>
#include "dist/json/json.h"

namespace Json {
    class JsonHandler : JsonReader, JsonWriter {
    public:
        Value *recipesJson = new Value();

        JsonHandler();

        ~JsonHandler() {
            delete recipesJson;
        };

        void readJson(string path) override {
            ifstream input;
            input.open("recipe.json");

            if (input.fail()) {
                std::cout << "Failed to open a file." << std::endl;
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

        void writeJson() override {
            Json::FastWriter writer;
            const std::string json_file = writer.write(recipesJson);
            ofstream write;
            write.open("recipe.json");

            write << json_file;

            write.close();
        }

        Value* getRecipesJson() const {
            return recipesJson;
        }
    };
}