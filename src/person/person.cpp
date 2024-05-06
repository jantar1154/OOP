#include "person.h"
#include <sstream>

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

string Person::to_string() const {
    std::stringstream ss;
    ss << "PERSON\n";
    ss << "Name: " << name << '\n';
    ss << "Age: " << unsigned(age);
    return ss.str();
}
