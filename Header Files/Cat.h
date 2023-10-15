#pragma once
#include "Animal.h"

class Cat: public Animal{
private:
    string breed;
    string color;
    string owner_name;
    string nickname;

public:
    Cat();
    Cat(string breed);
    Cat(const Cat& Cat_copy);
    ~Cat();

    string get_breed() const;
    void set_breed(string Cat_breed);

    string get_color() const;
    void set_color(string Cat_color);

    string get_owner_name() const;
    void set_owner_name(string Cat_owner_name);

    string get_nickname() const;
    void set_nickname(string Cat_nickname);

    void printInfo() override;
    void edit() override;
    void save() override;
};

