#include <iostream>
#include <fstream>
#include "Keeper.h"
#include "Bird.h"
#include "Fish.h"
#include "Cat.h"
using namespace std;

Keeper::Keeper() : len(0), head(nullptr) {}

Keeper::Keeper(int len) : head(nullptr) {this->len = len;}

Keeper::~Keeper(){
    clear();
}

void Keeper::clear(){
    if (head != nullptr){
        Queue* obj_ptr;
        while (head != nullptr){
            obj_ptr = head;
            head = head->next;
        }
    }
    head = nullptr;
}

int Keeper::get_len() {return len;}

void Keeper::edit(int index) {
    if (index >= 0 && index < len && head != nullptr){
        Queue* obj_ptr = head;
        if (index == 0) {
            obj_ptr->data->edit();
            return;
        }
        for (int i = 0; i < index; i++){
            obj_ptr = obj_ptr->next;
        }
        obj_ptr->data->edit();
    } else {
        cout << "\033[93mNo data.\033[0m" << endl;
    }
}

void Keeper::add(Animal* new_data){
    Queue* new_obj;
    new_obj = new Queue;
    new_obj->data = new_data;
    if (len == 0){
        new_obj->next = nullptr;
    } else {
        new_obj->next = head;
    }
    len++;
    head = new_obj;
}

void Keeper::remove(int index){
    if (index >= 0 && index < len && head != nullptr){
        Queue* obj_ptr = head;
        Queue* tmp_ptr = head;
        for (int i = 0; i < index; i++){
            tmp_ptr = obj_ptr;
            obj_ptr = obj_ptr->next;
        }
        if (obj_ptr == head) {
            head = obj_ptr->next;
        } else {
            tmp_ptr->next = obj_ptr->next;
        }
        obj_ptr->data->~Animal();
        delete(obj_ptr);
        len--;
    } else {
        cout << "\033[93mNo data.\033[0m" << endl;
    }
}

void Keeper::save(){
    ofstream file;
    string file_name = "animals.txt";
    try {
        file.open(file_name);
        if (!file) {
            throw runtime_error("Error while opening file " + file_name + " to save data.");
        }
    } catch (const exception& e) {
        cout << "\033[91m" << e.what() << "\033[0m";
        return;
    }
    file << len << endl;
    file.close();
    Queue* obj_ptr = head;
    while (obj_ptr != nullptr){
        obj_ptr->data->save();
        obj_ptr = obj_ptr->next;
    }
    cout << "\033[92mSaved "<< len <<" animals.\033[0m" << endl;

}

void Keeper::load(){
    if (len != 0) {clear();}
    int input_len;
    int animal_code;
    string input_string;
    ifstream file;
    string file_name = "animals.txt";
    try {
        file.open(file_name);
        if (!file) {
            throw runtime_error("Error while opening file " + file_name + " to save data.");
        }
    } catch (const exception& e) {
        cout << "\033[91m" << e.what() << "\033[0m" << endl;
        return;
    }
    file >> input_len;
    for (int i = 0; i < input_len; i++){
        file >> animal_code;
        file.ignore(32767, '\n');
        if (animal_code == 0) {
            Fish* new_fish;
            new_fish = new Fish;
            getline(file, input_string);
            new_fish->set_breed(input_string);
            getline(file, input_string);
            new_fish->set_color(input_string);
            getline(file, input_string);
            new_fish->set_food_type(input_string);
            add(new_fish);
        } else if (animal_code == 1) {
            Bird* new_bird;
            new_bird = new Bird;
            getline(file, input_string);
            new_bird->set_breed(input_string);
            getline(file, input_string);
            new_bird->set_color(input_string);
            getline(file, input_string);
            new_bird->set_food(input_string);
            getline(file, input_string);
            new_bird->set_habitat(input_string);
            add(new_bird);
        } else if (animal_code == 2) {
            Cat* new_cat;
            new_cat = new Cat;
            getline(file, input_string);
            new_cat->set_breed(input_string);
            getline(file, input_string);
            new_cat->set_color(input_string);
            getline(file, input_string);
            new_cat->set_owner_name(input_string);
            getline(file, input_string);
            new_cat->set_nickname(input_string);
            add(new_cat);
        }
    }
    cout << "\033[92mLoaded  "<< len <<" animals.\033[0m" << endl;
}

void Keeper::show(){
    if (head != nullptr){
        Queue* obj_ptr = head;
        cout << "\033[94m0. ";
        obj_ptr->data->printInfo();
        for (int i = 0; i < len-1; i++){
            obj_ptr = obj_ptr->next;
            cout << "\033[94m" << i+1 << ". ";
            obj_ptr->data->printInfo();
        }
    } else {
        cout << "\033[93mNo data.\033[0m" << endl;
    }
}

Animal* Keeper::operator[](int index) {
    if (index >= 0 && index < len && head != nullptr) {
        Queue *obj_ptr = head;
        if (index == 0) {
            obj_ptr->data->edit();
            return nullptr;
        }
        for (int i = 0; i < index; i++) {
            obj_ptr = obj_ptr->next;
        }
        obj_ptr->data->edit();
    }
    cout << "\033[93mNo data.\033[0m" << endl;
    return nullptr;
}
