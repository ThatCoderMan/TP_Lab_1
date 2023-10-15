#include <string>
#pragma once

using namespace std;

class Animal {
public:
    Animal() {};
    virtual ~Animal() {};

    virtual void printInfo() = 0;
    virtual void edit() = 0;
    virtual void save() = 0;
};
