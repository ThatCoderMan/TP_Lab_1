#include "Fish.h"
#include "Bird.h"
#include "Cat.h"

using namespace std;

int main (){

    Fish* fish;
    fish = new Fish;
    fish->edit();
    fish->printInfo();
    delete fish;

    Bird* bird;
    bird = new Bird;
    bird->edit();
    bird->printInfo();
    delete bird;

    Cat* cat;
    cat = new Cat;
    cat->edit();
    cat->printInfo();
    delete cat;
    return 0;
}