#include "employee.h"

Employee::Employee(string name, uint8_t age, size_t employee_id)
: Person(name, age) {
    this->employee_id = employee_id;
}

void Employee::add_animal(Animal *animal) {
    this->animals.push_back(animal);
}

const vector<Animal*> Employee::get_animals() const {
    return this->animals;
}
