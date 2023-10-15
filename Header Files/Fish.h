#pragma once
#include "Animal.h"

class Fish: public Animal{
private:
    string breed;
    string color;
    string food_type;

public:
    Fish();
    Fish(string breed);
    Fish(const Fish& Fish_copy);
    ~Fish();

    string get_breed() const;
    void set_breed(string fish_breed);

    string get_color() const;
    void set_color(string fish_color);

    string get_food_type() const;
    void set_food_type(string fish_food_type);

    void printInfo() override;
    void edit() override;
    void save() override;
};

