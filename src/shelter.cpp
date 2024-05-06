#include "shelter.h"

Shelter::Shelter(string name) {
    this->name = name;
}

Shelter::~Shelter() {
    for (Animal* i : this->animals) delete i;
    for (Admin* i : this->admins) delete i;
    for (Employee* i : this->employees) delete i;
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

Admin* Shelter::add_admin(string name, uint8_t age, size_t employee_id) {
    Admin *a = new Admin(name, age, employee_id, this);
    this->admins.push_back(a);
    return a;
}

const vector<Admin*> Shelter::get_admins() const {
    return this->admins;
}
