#include "Bird.h"
#include <iostream>

using namespace std;

Bird::Bird(){
    cout << "\033[90mBird constructor called\033[0m" << endl;
}

Bird::Bird(string breed){
    this->breed = std::move(breed);
}

Bird::Bird(const Bird& Bird_copy){
    breed = Bird_copy.breed;
    color = Bird_copy.color;
    food = Bird_copy.food;
    habitat = Bird_copy.habitat;
}

Bird::~Bird(){
    cout << "\033[90mBird destructor called\033[0m" << endl;
}

string Bird::get_breed() const {
    return breed;
}

void Bird::set_breed(string Bird_breed){
    breed = std::move(Bird_breed);
}

string Bird::get_color() const {
    return color;
}

void Bird::set_color(string Bird_color){
    color = std::move(Bird_color);
}

string Bird::get_food() const {
    return food;
}

void Bird::set_food(string Bird_food){
    food = std::move(Bird_food);
}

string Bird::get_habitat() const {
    return habitat;
}

void Bird::set_habitat(string Bird_habitat){
    habitat = std::move(Bird_habitat);
}

void Bird::printInfo () {
    cout << "\033[94mBird:" << endl;
    cout << "\tbreed: " << breed << endl;
    cout << "\tcolor: " << color << endl;
    cout << "\tfood: " << food << endl;
    cout << "\thabitat: " << habitat << endl;
    cout << "\033[0m" << endl;
}

void Bird::edit() {
    cout << "\033[93mEnter data for Bird" << endl;
    cout << "Enter breed (current - " << breed << "): ";
    getline(cin, breed);
    cout << "Enter color (current - " << color << "): ";
    getline(cin, color);
    cout << "Enter food (current - " << food << "): ";
    getline(cin, food);
    cout << "Enter habitat (current - " << habitat << "): ";
    getline(cin, habitat);
    cout << "\033[0m" << endl;
}

void Bird::save() {

}