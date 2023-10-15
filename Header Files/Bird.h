#pragma once
#include "Animal.h"

class Bird: public Animal{
private:
    string breed;
    string color;
    string food;
    string habitat;

public:
    Bird();
    Bird(string breed);
    Bird(const Bird& Bird_copy);
    ~Bird();

    string get_breed() const;
    void set_breed(string Bird_breed);

    string get_color() const;
    void set_color(string Bird_color);

    string get_food() const;
    void set_food(string Bird_food);

    string get_habitat() const;
    void set_habitat(string Bird_habitat);

    void printInfo() override;
    void edit() override;
    void save() override;
};

