#include "shelter.h"

Shelter::Shelter(string name) {
    this->name = name;
    this->inventory = new Inventory;
}

Shelter::~Shelter() {
    for (Animal* i : this->animals) delete i;
    for (Admin* i : this->admins) delete i;
    for (Employee* i : this->employees) delete i;
    delete inventory;
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

int Shelter::remove_animal(Animal *animal) {
    for (size_t i = 0; i < this->animals.size(); ++i) {
        const Animal *a = this->animals.at(i);
        if (a != animal) continue;
        this->animals.erase(this->animals.begin() + i);
        return 0;
    }
    return 1;
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
    this->inventory->add_item(item);
    return item;
}

InventoryItem* Shelter::add_to_inventory(string name, float price, int amount) {
    InventoryItem *item = new InventoryItem(name, price, amount);
    add_to_inventory(item);
    return item;
}

const Inventory* Shelter::get_inventory() const {
    return this->inventory;
}
