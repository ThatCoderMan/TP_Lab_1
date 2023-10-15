#include "Cat.h"
#include <iostream>

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
    cout << "Enter breed (current - " << breed << "): ";
    getline(cin, breed);
    cout << "Enter color (current - " << color << "): ";
    getline(cin, color);
    cout << "Enter owner_name (current - " << owner_name << "): ";
    getline(cin, owner_name);
    cout << "Enter nickname (current - " << nickname << "): ";
    getline(cin, nickname);
    cout << "\033[0m" << endl;
}

void Cat::save() {

}