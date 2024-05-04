#include "animal.h"

Animal::Animal(string name, uint8_t age) {
    this->name = name;
    this->age = age;
}

string Animal::get_name() const {
    return this->name;
}

uint8_t Animal::get_age() const {
    return this->age;
}
