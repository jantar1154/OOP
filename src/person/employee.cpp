#include "employee.h"
#include <sstream>

Employee::Employee(string name, uint8_t age, size_t employee_id)
: Person(name, age) {
    this->employee_id = employee_id;
}

size_t Employee::get_employee_id() const {
    return this->employee_id;
}

void Employee::add_animal(Animal *animal) {
    this->animals.push_back(animal);
}

const vector<Animal*> Employee::get_animals() const {
    return this->animals;
}

string Employee::to_string() const {
    std::stringstream ss;
    ss << "EMPLOYEE\n";
    ss << "Name: " << get_name() << '\n';
    ss << "Age: " << unsigned(get_age()) << '\n';
    ss << "Employee ID: " << get_employee_id();
    return ss.str();
}
