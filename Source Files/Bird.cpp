#include "Bird.h"
#include <iostream>
#include <fstream>
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
    if (food == ""){
        cout << "Enter food: ";
    } else {
        cout << "Enter food (current - " << food << "): ";
    }
    cin >> food;
    if (habitat == ""){
        cout << "Enter habitat: ";
    } else {
        cout << "Enter habitat (current - " << habitat << "): ";
    }
    cin >> habitat;
    cout << "\033[0m" << endl;
}

void Bird::save() {
    ofstream file;
    string file_name = "animals.txt";
    file.open(file_name, ios::app);
    if (!file){
        cout << "\033[91mError while opening file "<< file_name <<" to load data.\033[0m";
        return;
    }
    file << 1 << endl <<
         breed << endl <<
         color << endl <<
         food << endl <<
         habitat << endl;
    file.close();
}