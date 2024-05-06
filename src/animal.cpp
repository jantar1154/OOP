#include "animal.h"
#include <sstream>

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

string Animal::to_string() const {
    std::stringstream ss;
    ss << "ANIMAL\n";
    ss << "Name: " << this->name << '\n';
    ss << "Age: " << unsigned(this->age) << " years";
    return ss.str();
}
