#include <iostream>
#include "Fish.h"
#include "Bird.h"
#include "Cat.h"
#include "Keeper.h"
using namespace std;

void menu() {
    cout << "1. Add an animal" << endl <<
         "2. Output a list of animals" << endl <<
         "3. Delete animal" << endl <<
         "4. Edit animal" << endl <<
         "5. Save data" << endl <<
         "6. Upload data" << endl <<
         "0. Exit" << endl <<
         "Select the menu item: ";
}

int main (){

    Keeper* keeper;
    keeper = new Keeper;

    int input_point = 1;
    int input_number;
    while (input_point != 0){
        menu();
        cin >> input_point;
        switch (input_point) {
            case 1:
                cout << "Choose animal to add (Fish-0; Bird-1; Cat-2): ";
                cin >> input_number;
                if (input_number == 0) {
                    Fish* fish;
                    fish = new Fish;
                    fish->edit();
                    keeper->add(fish);
                } else if (input_number == 1) {
                    Bird* bird;
                    bird = new Bird;
                    bird->edit();
                    keeper->add(bird);
                } else if (input_number == 2) {
                    Cat *cat;
                    cat = new Cat;
                    cat->edit();
                    keeper->add(cat);
                }
                break;
            case 2:
                cout << "\033[94mCount animals: " << keeper->get_len() << "\033[0m" << endl;
                keeper->show();
                break;
            case 3:
                cout << "Enter index of animal to remove: ";
                cin >> input_number;
                keeper->remove(input_number);
                break;
            case 4:
                cout << "Enter index of animal to edit: ";
                cin >> input_number;
                keeper->edit(input_number);
                break;
            case 5:
                keeper->save();
                break;
            case 6:
                keeper->load();
                break;
            default:
                break;
        }
    }
    keeper->~Keeper();
    cout << "Program shutdown by user.";
    return 0;
}