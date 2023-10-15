#include "Fish.h"
#include <iostream>

using namespace std;

Fish::Fish(){
    cout << "\033[90mFish constructor called\033[0m" << endl;
}

Fish::Fish(string breed){
    this->breed = std::move(breed);
}

Fish::Fish(const Fish& Fish_copy){
    breed = Fish_copy.breed;
    color = Fish_copy.color;
    food_type = Fish_copy.food_type;
}

Fish::~Fish(){
    cout << "\033[90mFish destructor called\033[0m" << endl;
}

string Fish::get_breed() const {
    return breed;
}

void Fish::set_breed(string fish_breed){
    breed = std::move(fish_breed);
}

string Fish::get_color() const {
    return color;
}

void Fish::set_color(string fish_color){
    color = std::move(fish_color);
}

string Fish::get_food_type() const {
    return food_type;
}

void Fish::set_food_type(string fish_food_type){
    food_type = std::move(fish_food_type);
}

void Fish::printInfo () {
    cout << "\033[94mFish:" << endl;
    cout << "\tbreed: " << breed << endl;
    cout << "\tcolor: " << color << endl;
    cout << "\tfood_type: " << food_type << endl;
    cout << "\033[0m" << endl;
}

void Fish::edit() {
    cout << "\033[93mEnter data for Fish" << endl;
    cout << "Enter breed (current - " << breed << "): ";
    getline(cin, breed);
    cout << "Enter color (current - " << color << "): ";
    getline(cin, color);
    cout << "Enter food_type (current - " << food_type << "): ";
    getline(cin, food_type);
    cout << "\033[0m" << endl;
}

void Fish::save() {

}