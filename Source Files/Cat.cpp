#include "Cat.h"
#include <iostream>
#include <fstream>

using namespace std;

Cat::Cat(){
    cout << "\033[90mCat constructor called\033[0m" << endl;
}

Cat::Cat(string breed){
    this->breed = std::move(breed);
}

Cat::Cat(const Cat& Cat_copy){
    breed = Cat_copy.breed;
    color = Cat_copy.color;
    owner_name = Cat_copy.owner_name;
    nickname = Cat_copy.nickname;
}

Cat::~Cat(){
    cout << "\033[90mCat destructor called\033[0m" << endl;
}

string Cat::get_breed() const {
    return breed;
}

void Cat::set_breed(string Cat_breed){
    breed = std::move(Cat_breed);
}

string Cat::get_color() const {
    return color;
}

void Cat::set_color(string Cat_color){
    color = std::move(Cat_color);
}

string Cat::get_owner_name() const {
    return owner_name;
}

void Cat::set_owner_name(string Cat_owner_name){
    owner_name = std::move(Cat_owner_name);
}

string Cat::get_nickname() const {
    return nickname;
}

void Cat::set_nickname(string Cat_nickname){
    nickname = std::move(Cat_nickname);
}

void Cat::printInfo () {
    cout << "\033[94mCat:" << endl;
    cout << "\tbreed: " << breed << endl;
    cout << "\tcolor: " << color << endl;
    cout << "\towner_name: " << owner_name << endl;
    cout << "\tnickname: " << nickname << endl;
    cout << "\033[0m" << endl;
}

void Cat::edit() {
    cout << "\033[93mEnter data for Cat" << endl;
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
    if (owner_name == ""){
        cout << "Enter owner_name: ";
    } else {
        cout << "Enter owner_name (current - " << owner_name << "): ";
    }
    cin >> owner_name;
    if (nickname == ""){
        cout << "Enter nickname: ";
    } else {
        cout << "Enter nickname (current - " << nickname << "): ";
    }
    cin >> nickname;
    cout << "\033[0m" << endl;
}

void Cat::save() {
    ofstream file;
    string file_name = "animals.txt";
    file.open(file_name, ios::app);
    if (!file){
        cout << "\033[91mError while opening file "<< file_name <<" to load data.\033[0m";
        return;
    }
    file << 2 << endl <<
         breed << endl <<
         color << endl <<
         owner_name << endl <<
         nickname << endl;
    file.close();
}
