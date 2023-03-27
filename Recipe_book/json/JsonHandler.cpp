//
// Created by Boris Bobylkov on 24/03/2023.
//

#include "JsonHandler.h"
#include "JsonReader.h"
#include "JsonWriter.h"
#include <iostream>
#include <fstream>
#include "../dist/json/json.h"

        Json::Value *recipesJson = new Json::Value();

        JsonHandler::JsonHandler(){
//            readJson();
        };

        JsonHandler::JsonHandler(Json::Value input) {
            recipesJson = &input;
        }

        JsonHandler::~JsonHandler() {
            delete recipesJson;
        };

        void JsonHandler::readJson() {
            ifstream input;
            input.open("recipe.json");

            if (input.fail()) {
                std::cout << "Failed to open a file." << std::endl;
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

        void JsonHandler::writeJson()  {
            Json::FastWriter writer;
            std::string json_file = writer.write(recipesJson);
            fstream write;
            write.open("./recipe.json");

            cout << json_file << endl;

            write << json_file;

            write.close();
        }

        void JsonHandler::addRecipe(Json::Value *input) {
            (*recipesJson)[(*input)["id"].asString()] = *input;
            (*recipesJson)["number of recipes"] = 1;
        }

        Json::Value* JsonHandler::getRecipesJson() const {
            return recipesJson;
        }


        JsonHandler* JsonHandler::getRecipe(std::string name) const {
            if ((*recipesJson)[name] == NULL) {
                return new JsonHandler((*recipesJson)[name]);
            }

            return NULL;
        }
