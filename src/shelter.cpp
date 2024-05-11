#include "shelter.h"

Shelter::Shelter(string name) {
    this->name = name;
}

Shelter::~Shelter() {
    for (Animal* i : this->animals) delete i;
    for (Admin* i : this->admins) delete i;
    for (Employee* i : this->employees) delete i;
    for (InventoryItem* i : this->inventory) delete i;
}

Animal* Shelter::add_animal(Animal *const animal) {
    this->animals.push_back(animal);
    return animal;
}

Animal *Shelter::add_animal(string name, uint8_t age) {
    Animal *animal = new Animal(name, age);
    add_animal(animal);
    return animal;
}

void Shelter::remove_animal(Animal *animal) {
    for (size_t i = 0; i < this->animals.size(); ++i) {
        const Animal *a = this->animals.at(i);
        if (a != animal) continue;
        this->animals.erase(this->animals.begin() + i);
        return;
    }
}

vector<Animal*> Shelter::get_animals() {
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

const vector<Employee*> Shelter::get_employees() const {
    return this->employees;
}

InventoryItem* Shelter::add_to_inventory(InventoryItem *item) {
    this->inventory.push_back(item);
    return item;
}

InventoryItem* Shelter::add_to_inventory(string name, float price) {
    InventoryItem *item = new InventoryItem(name, price);
    add_to_inventory(item);
    return item;
}

const vector<InventoryItem*> Shelter::get_inventory() const {
    return this->inventory;
}
