#include "Fish.h"
#include <iostream>
#include <fstream>
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
    if (breed == ""){
        cout << "Enter breed: ";
    } else {
        cout << "Enter breed (current - " << breed << "): ";
    }
    cin >> breed;
    if (color == ""){
        cout << "Enter color: ";
    } else {
        cout << "Enter color (current - " << color << "): ";
    }
    cin >> color;
    if (food_type == ""){
        cout << "Enter food_type: ";
    } else {
        cout << "Enter food_type (current - " << food_type << "): ";
    }
    cin >> food_type;
    cout << "\033[0m" << endl;
}

void Fish::save() {
    ofstream file;
    string file_name = "animals.txt";
    file.open(file_name, ios::app);
    if (!file){
        cout << "\033[91mError while opening file "<< file_name <<" to load data.\033[0m";
        return;
    }
    file << 0 << endl <<
    breed << endl <<
    color << endl <<
    food_type << endl;
    file.close();
}
