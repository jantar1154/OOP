#include "person.h"

Person::Person(string name, uint8_t age) {
    this->name = name;
    this->age = age;
}

string Person::get_name() const {
    return this->name;
}

uint8_t Person::get_age() const {
    return this->age;
}
