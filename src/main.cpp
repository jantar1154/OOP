#include <iostream>
#include "shelter.h"

using std::cout;
using std::endl;

int main() {
    Shelter *sh01 = new Shelter("Utulek super 3000+");
    Admin *k = sh01->add_admin("Karel Adminak", 0x16, 0xA00001);
    k->add_employee("Pablo", 0x40, 0xE00001);

    cout << endl;

    // Print admins
    for (Admin *const i : sh01->get_admins()) {
        cout << i->to_string() << endl;
    }
    cout << endl;

    // Print employees
    for (Employee *const i : sh01->get_employees()) {
        cout << i->to_string() << endl;
    }
    cout << endl;


    // Add animals
    k->add_animal("Miluna", 0x03);
    k->add_animal("Archie", 0x06);

    // Print animals
    for (Animal *i : sh01->get_animals()) {
        cout << i->to_string() << endl;
    }
    cout << endl;

    Animal *adopt_dog = sh01->get_animals().at(1);

    // Adopt animal
    Adopter *adp = new Adopter("Jakub", 0x1A);
    k->adopt_animal(adopt_dog, adp);
    cout << adopt_dog->get_name() << " adopted !" << endl;

    // Print shelter animals again
    for (Animal *i : sh01->get_animals()) {
        cout << i->to_string() << endl;
    }
    cout << endl;

    // Print adopter's adopted animals
    cout << adp->to_string() << endl;

    delete adp;
    delete sh01;
    return 0;
}
