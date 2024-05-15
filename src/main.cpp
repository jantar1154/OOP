#include "shelter.h"
#include <iostream>
#include <sstream>
#include <random>

using std::cout;
using std::endl;

int random_int(int min, int max) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dist(min, max);
    return dist(gen);
}

int main() {
    Shelter *sh01 = new Shelter("Utulek super 3000+");
    Admin *k = sh01->add_admin("Karel Adminak", 21, 0xA00001);
    k->add_employee("Pablo", 61, 0xE00001);

    cout << endl;

    // Print admins
    for (const Person *const i : sh01->get_admins())
        cout << i->to_string() << endl;
    cout << endl;

    // Print employees
    for (const Person *const i : sh01->get_employees())
        cout << i->to_string() << endl;
    cout << endl;

    // Add inventory items
    for (size_t i = 0; i < 100; ++i) {
        std::stringstream ss;
        ss << "Item " << i;
        const string name = ss.str();
        const float price = random_int(10, 200);
        const int amount = random_int(10, 100);
        sh01->add_to_inventory(name, price, amount);
    }
    sh01->add_to_inventory("Kocici granule 10kg", 400, 10);
    sh01->add_to_inventory("Hracky pro psy", 30, 25);

    // Print inventory
    cout << "INVENTORY:\n";
    for (const InventoryItem *const i : sh01->get_inventory()->get_items())
        cout << i->to_string() << endl;
    cout << endl;

    // Add animals
    k->add_animal("Miluna", 3);
    k->add_animal("Archie", 6);

    // Print animals
    for (const Animal *const i : sh01->get_animals())
        cout << i->to_string() << endl;
    cout << endl;

    Animal *adopt_dog = sh01->get_animals().at(1);

    // Adopt animal
    Adopter *adp = new Adopter("Jakub", 32);
    k->adopt_animal(adopt_dog, adp);
    cout << adopt_dog->get_name() << " adopted !" << endl;

    // Print shelter animals again
    for (const Animal *const i : sh01->get_animals())
        cout << i->to_string() << endl;
    cout << endl;

    // Print adopter's adopted animals
    cout << adp->to_string() << endl;

    delete adp;
    delete sh01;
    return 0;
}
