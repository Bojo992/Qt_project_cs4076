//
// Created by Boris Bobylkov on 29/03/2023.
//

#ifndef RECIPE_BOOK_STEP_H
#define RECIPE_BOOK_STEP_H

#include <string>

using namespace std;

class stepStruct{
public:
    stepStruct();

    stepStruct(std::string , int);

    const string &getStep() const;

    void setStep(const string &step);

    const string &getImg() const;

    void setImg(const string &img);

    int getType() const;

    void setType(int type);

    virtual ~stepStruct();


    string step;
    string img;
    int type;
};


#endif //RECIPE_BOOK_STEP_H
