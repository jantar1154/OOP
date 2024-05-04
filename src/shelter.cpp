#include "shelter.h"

Shelter::Shelter(string name) {
    this->name = name;
}

Shelter::~Shelter() {
    for (Animal* i : this->animals)
        delete i;
}

void Shelter::add_animal(Animal *const animal) {
    this->animals.push_back(animal);
}

void Shelter::add_animal(string name, uint8_t age) {
    Animal *animal = new Animal(name, age);
    add_animal(animal);
}

const vector<Animal*> Shelter::get_animals() const {
    return this->animals;
}

void Shelter::add_admin(Admin *admin) {
    this->admins.push_back(admin);
}

void Shelter::add_admin(string name, uint8_t age, size_t employee_id) {
    Admin *a = new Admin(name, age, employee_id, this);
    add_admin(a);
}
