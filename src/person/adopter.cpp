#include "adopter.h"

Adopter::Adopter(string name, uint8_t age)
: Person(name, age) {
    
}

const vector<Animal*> Adopter::get_adopted_animals() const {
    return this->adopted_animals;
}

void Adopter::adopt_animal(Animal *animal) {
    this->adopted_animals.push_back(animal);
}
