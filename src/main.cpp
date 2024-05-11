#include <iostream>
#include "shelter.h"

using std::cout;
using std::endl;

int main() {
    Shelter *sh01 = new Shelter("Utulek super 3000+");
    Admin *k = sh01->add_admin("Karel Adminak", 21, 0xA00001);
    k->add_employee("Pablo", 61, 0xE00001);

    cout << endl;

    // Print admins
    for (Admin *const i : sh01->get_admins())
        cout << i->to_string() << endl;
    cout << endl;

    // Print employees
    for (Employee *const i : sh01->get_employees())
        cout << i->to_string() << endl;
    cout << endl;

    // Add inventory items
    sh01->add_to_inventory("Kocici granule 10kg", 400);
    sh01->add_to_inventory("Hracky pro psy", 9999);

    // Print inventory
    cout << "INVENTORY:\n";
    for (InventoryItem *const i : sh01->get_inventory())
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
