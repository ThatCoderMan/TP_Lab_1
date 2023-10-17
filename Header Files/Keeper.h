#pragma once
#include "Animal.h"

typedef struct Queue{
    Animal* data;
    Queue* next;
} Queue;


class Keeper{
private:
    int len = 0;
    Queue* head = NULL;
public:
    Keeper();
    Keeper(int size);
    ~Keeper();

    int get_len();

    void add(Animal* n_data);
    void edit(int index);
    void remove(int index);
    void clear();

    void save();
    void load();
    void show();
};

