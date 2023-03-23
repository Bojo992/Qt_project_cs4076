//
// Created by Boris Bobylkov on 23/03/2023.
//

#ifndef RECIPE_BOOK_JSONREADER_H
#define RECIPE_BOOK_JSONREADER_H
#include <string>

using namespace std;

class JsonReader{
public:
    virtual void readJson(string path) = 0;
};

#endif //RECIPE_BOOK_JSONREADER_H
