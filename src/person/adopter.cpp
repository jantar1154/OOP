#include "adopter.h"
#include <sstream>

Adopter::Adopter(string name, uint8_t age) 
:Person(name, age) {
}

Adopter::~Adopter() {
    // Delete adopted animals
    for (Animal *i : this->adopted_animals) {
        delete i;
    }
}

string Adopter::get_name() const {
    return this->name;
}

uint8_t Adopter::get_age() const {
    return this->age;
}

const vector<Animal*> Adopter::get_adopted_animals() const {
    return this->adopted_animals;
}

void Adopter::adopt_animal(Animal *animal) {
    this->adopted_animals.push_back(animal);
}

string Adopter::to_string() const {
    std::stringstream ss;
    ss << "ADOPTER\n";
    ss << "Name: " << this->get_name() << '\n';
    ss << "Age: " << this->get_age() << '\n';
    ss << "Adopted animals: " << this->get_adopted_animals().size();
    for (Animal *i : this->get_adopted_animals())
        ss << '\n' << i->to_string();
    return ss.str();
}
